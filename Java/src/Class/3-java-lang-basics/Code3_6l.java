/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 47 - if-else多分支（成绩等级）
 * 说明: if-else if-else多分支结构
 */
public class Code3_6l {
    public static void main(String[] args) {
        int score = 75;

        if (score >= 85 && score <= 100)
            System.out.println("优秀");
        else if (score >= 60 && score < 85)
            System.out.println("通过");
        else if (score >= 0 && score < 60)
            System.out.println("不通过");
        else
            System.out.println("成绩有误");
    }
}
