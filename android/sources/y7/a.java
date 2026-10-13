package y7;

import com.discord.safearea.SafeAreaInsetsModule;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20665d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ SafeAreaInsetsModule f20666e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ boolean f20667i;

    public /* synthetic */ a(SafeAreaInsetsModule safeAreaInsetsModule, boolean z5, int i5) {
        this.f20665d = i5;
        this.f20666e = safeAreaInsetsModule;
        this.f20667i = z5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f20665d) {
            case 0:
                SafeAreaInsetsModule.setNavigationBarContrastEnforced$lambda$4(this.f20666e, this.f20667i);
                break;
            case 1:
                SafeAreaInsetsModule.setStatusBarVisible$lambda$2(this.f20666e, this.f20667i);
                break;
            default:
                SafeAreaInsetsModule.setNavigationBarVisible$lambda$3(this.f20666e, this.f20667i);
                break;
        }
    }
}
