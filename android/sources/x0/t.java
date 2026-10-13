package x0;

import android.app.Notification;

/* loaded from: classes.dex */
public abstract class t {
    public static boolean a(Notification.Action action) {
        return action.isAuthenticationRequired();
    }
}
