package f8;

import android.content.res.Resources;
import com.discord.theme.AshTheme;
import com.discord.theme.DarkTheme;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final /* synthetic */ class h implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8414d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Resources f8415e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Resources.Theme f8416i;

    public /* synthetic */ h(Resources resources, int i5, Resources.Theme theme) {
        this.f8414d = i5;
        this.f8415e = resources;
        this.f8416i = theme;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int textCode_delegate$lambda$184;
        switch (this.f8414d) {
            case 0:
                textCode_delegate$lambda$184 = AshTheme.textCode_delegate$lambda$184(this.f8415e, this.f8416i);
                break;
            case 1:
                textCode_delegate$lambda$184 = AshTheme.textCodeAddition_delegate$lambda$185(this.f8415e, this.f8416i);
                break;
            case 2:
                textCode_delegate$lambda$184 = AshTheme.textCodeBuiltin_delegate$lambda$186(this.f8415e, this.f8416i);
                break;
            case 3:
                textCode_delegate$lambda$184 = AshTheme.textCodeComment_delegate$lambda$187(this.f8415e, this.f8416i);
                break;
            case 4:
                textCode_delegate$lambda$184 = AshTheme.textCodeDeletion_delegate$lambda$188(this.f8415e, this.f8416i);
                break;
            case 5:
                textCode_delegate$lambda$184 = AshTheme.textCodeKeyword_delegate$lambda$189(this.f8415e, this.f8416i);
                break;
            case 6:
                textCode_delegate$lambda$184 = AshTheme.backgroundVoiceMuted_delegate$lambda$18(this.f8415e, this.f8416i);
                break;
            case 7:
                textCode_delegate$lambda$184 = AshTheme.inputBorderErrorDefault_delegate$lambda$108(this.f8415e, this.f8416i);
                break;
            case 8:
                textCode_delegate$lambda$184 = DarkTheme.activityTimebarProgressBackground_delegate$lambda$0(this.f8415e, this.f8416i);
                break;
            case 9:
                textCode_delegate$lambda$184 = DarkTheme.textCodeProperty_delegate$lambda$190(this.f8415e, this.f8416i);
                break;
            case 10:
                textCode_delegate$lambda$184 = DarkTheme.textCodeString_delegate$lambda$191(this.f8415e, this.f8416i);
                break;
            case 11:
                textCode_delegate$lambda$184 = DarkTheme.textCodeTitle_delegate$lambda$192(this.f8415e, this.f8416i);
                break;
            case 12:
                textCode_delegate$lambda$184 = DarkTheme.textCodeType_delegate$lambda$193(this.f8415e, this.f8416i);
                break;
            case 13:
                textCode_delegate$lambda$184 = DarkTheme.textDefault_delegate$lambda$194(this.f8415e, this.f8416i);
                break;
            case 14:
                textCode_delegate$lambda$184 = DarkTheme.textFeedbackCritical_delegate$lambda$195(this.f8415e, this.f8416i);
                break;
            case 15:
                textCode_delegate$lambda$184 = DarkTheme.textFeedbackInfo_delegate$lambda$196(this.f8415e, this.f8416i);
                break;
            case 16:
                textCode_delegate$lambda$184 = DarkTheme.textFeedbackPositive_delegate$lambda$197(this.f8415e, this.f8416i);
                break;
            case 17:
                textCode_delegate$lambda$184 = DarkTheme.textFeedbackWarning_delegate$lambda$198(this.f8415e, this.f8416i);
                break;
            case 18:
                textCode_delegate$lambda$184 = DarkTheme.textLink_delegate$lambda$199(this.f8415e, this.f8416i);
                break;
            case 19:
                textCode_delegate$lambda$184 = DarkTheme.inputIconDefault_delegate$lambda$109(this.f8415e, this.f8416i);
                break;
            case 20:
                textCode_delegate$lambda$184 = DarkTheme.badgeBackgroundBrand_delegate$lambda$19(this.f8415e, this.f8416i);
                break;
            case 21:
                textCode_delegate$lambda$184 = DarkTheme.appFrameBorder_delegate$lambda$1(this.f8415e, this.f8416i);
                break;
            case 22:
                textCode_delegate$lambda$184 = DarkTheme.textMuted_delegate$lambda$200(this.f8415e, this.f8416i);
                break;
            case 23:
                textCode_delegate$lambda$184 = DarkTheme.textStrong_delegate$lambda$201(this.f8415e, this.f8416i);
                break;
            case 24:
                textCode_delegate$lambda$184 = DarkTheme.textSubtle_delegate$lambda$202(this.f8415e, this.f8416i);
                break;
            case 25:
                textCode_delegate$lambda$184 = DarkTheme.textVoiceConnected_delegate$lambda$203(this.f8415e, this.f8416i);
                break;
            case 26:
                textCode_delegate$lambda$184 = DarkTheme.textVoiceDisconnected_delegate$lambda$204(this.f8415e, this.f8416i);
                break;
            case 27:
                textCode_delegate$lambda$184 = DarkTheme.textVoiceSpeaking_delegate$lambda$205(this.f8415e, this.f8416i);
                break;
            case 28:
                textCode_delegate$lambda$184 = DarkTheme.toastCriticalBackground_delegate$lambda$206(this.f8415e, this.f8416i);
                break;
            default:
                textCode_delegate$lambda$184 = DarkTheme.toastCriticalBorder_delegate$lambda$207(this.f8415e, this.f8416i);
                break;
        }
        return Integer.valueOf(textCode_delegate$lambda$184);
    }
}
