package f8;

import android.content.res.Resources;
import com.discord.theme.DarkTheme;
import com.discord.theme.LightTheme;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final /* synthetic */ class o implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8435d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Resources f8436e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Resources.Theme f8437i;

    public /* synthetic */ o(Resources resources, int i5, Resources.Theme theme) {
        this.f8435d = i5;
        this.f8436e = resources;
        this.f8437i = theme;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int tabLabelTextDefault_delegate$lambda$178;
        switch (this.f8435d) {
            case 0:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.tabLabelTextDefault_delegate$lambda$178(this.f8436e, this.f8437i);
                break;
            case 1:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.tabLabelTextFocused_delegate$lambda$179(this.f8436e, this.f8437i);
                break;
            case 2:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.backgroundSurfaceHighest_delegate$lambda$17(this.f8436e, this.f8437i);
                break;
            case 3:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.tablerowBackgroundDefault_delegate$lambda$180(this.f8436e, this.f8437i);
                break;
            case 4:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.inputBorderDefault_delegate$lambda$107(this.f8436e, this.f8437i);
                break;
            case 5:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.tablerowBackgroundPressed_delegate$lambda$181(this.f8436e, this.f8437i);
                break;
            case 6:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.tablerowIconColorDefault_delegate$lambda$182(this.f8436e, this.f8437i);
                break;
            case 7:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.textBrand_delegate$lambda$183(this.f8436e, this.f8437i);
                break;
            case 8:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.textCode_delegate$lambda$184(this.f8436e, this.f8437i);
                break;
            case 9:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.textCodeAddition_delegate$lambda$185(this.f8436e, this.f8437i);
                break;
            case 10:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.textCodeBuiltin_delegate$lambda$186(this.f8436e, this.f8437i);
                break;
            case 11:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.textCodeComment_delegate$lambda$187(this.f8436e, this.f8437i);
                break;
            case 12:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.textCodeDeletion_delegate$lambda$188(this.f8436e, this.f8437i);
                break;
            case 13:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.textCodeKeyword_delegate$lambda$189(this.f8436e, this.f8437i);
                break;
            case 14:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.backgroundVoiceMuted_delegate$lambda$18(this.f8436e, this.f8437i);
                break;
            case 15:
                tabLabelTextDefault_delegate$lambda$178 = DarkTheme.inputBorderErrorDefault_delegate$lambda$108(this.f8436e, this.f8437i);
                break;
            case 16:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.activityTimebarProgressBackground_delegate$lambda$0(this.f8436e, this.f8437i);
                break;
            case 17:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textCodeProperty_delegate$lambda$190(this.f8436e, this.f8437i);
                break;
            case 18:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textCodeString_delegate$lambda$191(this.f8436e, this.f8437i);
                break;
            case 19:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textCodeTitle_delegate$lambda$192(this.f8436e, this.f8437i);
                break;
            case 20:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textCodeType_delegate$lambda$193(this.f8436e, this.f8437i);
                break;
            case 21:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textDefault_delegate$lambda$194(this.f8436e, this.f8437i);
                break;
            case 22:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textFeedbackCritical_delegate$lambda$195(this.f8436e, this.f8437i);
                break;
            case 23:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textFeedbackInfo_delegate$lambda$196(this.f8436e, this.f8437i);
                break;
            case 24:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textFeedbackPositive_delegate$lambda$197(this.f8436e, this.f8437i);
                break;
            case 25:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textFeedbackWarning_delegate$lambda$198(this.f8436e, this.f8437i);
                break;
            case 26:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.textLink_delegate$lambda$199(this.f8436e, this.f8437i);
                break;
            case 27:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.inputIconDefault_delegate$lambda$109(this.f8436e, this.f8437i);
                break;
            case 28:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.badgeBackgroundBrand_delegate$lambda$19(this.f8436e, this.f8437i);
                break;
            default:
                tabLabelTextDefault_delegate$lambda$178 = LightTheme.appFrameBorder_delegate$lambda$1(this.f8436e, this.f8437i);
                break;
        }
        return Integer.valueOf(tabLabelTextDefault_delegate$lambda$178);
    }
}
