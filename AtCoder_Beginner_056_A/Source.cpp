/*
��蕶
�V�J��AtCoDeer�����TopCoDeer���񂪁u�����҂��R�����v�Q�[�������Ă��܂��B ���̃Q�[���ł́A�����҂͏�ɂق�Ƃ��̂��Ƃ������A�R���͏�ɉR�������܂��B ���� a �� b �����͂Ƃ��ė^�����܂��B�����͂��ꂼ�� H �� D �̂ǂ��炩�ł��B
a=H �̂Ƃ��AAtCoDeer����͐����҂ł��B a=D �̂Ƃ��AAtCoDeer����͉R���ł��B b=H �̂Ƃ��AAtCoDeer����́uTopCoDeer����͐����҂��v�Ɣ������Ă��܂��B b=D �̂Ƃ��AAtCoDeer����́uTopCoDeer����͉R�����v�Ɣ������Ă��܂��B
����炩�画�f���āATopCoDeer���񂪐����҂��ǂ������肵�Ă��������B
*/

//�s�����{�ꂪ�ǂ߂Ȃ�

#include<iostream>

int main() {
	char a, b;
	std::cin >> a >> b;

	if (a == 'H') {
		std::cout << (b == 'H' ? 'H' : 'D') << std::endl;
	}

	if (a == 'D') {
		std::cout << (b == 'H' ? 'D' : 'H') << std::endl;
	}

	return 0;
}