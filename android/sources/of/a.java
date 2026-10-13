package of;

import android.app.Activity;
import android.os.Looper;
import bf.t;
import ye.d;
import ze.b;
import ze.h;

/* loaded from: classes3.dex */
public abstract class a {
    public static final d a = new d("is_user_verifying_platform_authenticator_available_for_credential", 1);

    /* renamed from: b, reason: collision with root package name */
    public static final d f15860b = new d("is_user_verifying_platform_authenticator_available", 1);

    public static qf.a a(Activity activity) {
        l8.a aVar = new l8.a(1);
        Looper mainLooper = activity.getMainLooper();
        t.h(mainLooper, "Looper must not be null.");
        return new qf.a(activity, activity, qf.a.k, b.D, new h(aVar, mainLooper));
    }
}
