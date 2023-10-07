#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137)
{
	target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
	: AForm(obj.getName(), obj.getSignGrade(), obj.getExecuteGrade())
{
	target = obj.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		setName(obj.getName());
		setSigned(obj.getSigned());
		setSignGrade(obj.getSignGrade());
		setExecuteGrade(obj.getExecuteGrade());
		target = obj.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target)
	: AForm(name, 145, 137)
{
	this->target = target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
	std::cout << b.getName() << " executed " << getName() << std::endl;
	std::ofstream ofs;
	ofs.open(target + "_shrubbery");
ofs <<
"             _{\\ _{\\{\\/{}/}/}__\n"
"            {/{/\\}{/{/\\}(}{/\\} _\n"
"           {/{/\\}{/{/\\}(_)}{/{/\\}  _\n"
"        {\\{/(}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
"       {/{/(_)/}{\\{/{)/}{\\(_){/}/}/}/}\n"
"      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
"     {/{/{\\{\\{\\(/}{\\{\\/{}/}{\\(_){\\/}\\}\n"
"     _{\\{/{\\{/(_)/}{/{/{/\\})\\}{/{/\\}\n"
"    {/{/{\\{\\(/}{/{\\{\\/})/}{\\(_)/}/}\\}\n"
"     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
"      {/{\\{\\/}{/{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
"     {/{\\{\\/}{/){\\{\\/}/}{\\{\\(/}/}/}/}\n"
"      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
"        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
"         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
"           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
"            {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
"             {){/ {\\/}{\\/} \\}\\}\n"
"             (_)  \\.-'.-/\n"
"         __...--- |'-.-'| --...__\n"
"  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
" -\"    ' .  . '   |.'-._| '  . .  '   \n"
".  '-  '    .--'  | '-.'|    .  '  . '\n"
"         ' ..     |'-_.-|\n"
" .  '  .       _.-|-._ -|-._  .  '  .\n"
"             .'   |'- .-|   '.\n"
" ..-'   ' .  '.   `-._.-`   .'  '  - .\n"
"  .-' '        '-._______.-'     '  .\n"
"       .      ~,\n"
"   .       .     .    ' '-.\n";
	ofs.close();
}