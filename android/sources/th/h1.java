package th;

import android.content.Context;
import android.content.pm.PackageManager;

/* loaded from: classes3.dex */
public final class h1 {

    /* renamed from: c, reason: collision with root package name */
    public static final a5.m f18465c = new a5.m("PackageStateCache", 3);
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public int f18466b = -1;

    public h1(Context context) {
        this.a = context;
    }

    public final synchronized int a() {
        if (this.f18466b == -1) {
            try {
                this.f18466b = this.a.getPackageManager().getPackageInfo(this.a.getPackageName(), 0).versionCode;
            } catch (PackageManager.NameNotFoundException unused) {
                f18465c.b("The current version of the app could not be retrieved", new Object[0]);
            }
        }
        return this.f18466b;
    }
}
