package x0;

import android.app.Notification;
import android.os.Build;
import android.os.Bundle;
import androidx.core.app.NotificationCompat$Builder;
import androidx.core.app.NotificationCompat$MessagingStyle;

/* loaded from: classes.dex */
public abstract class v0 {
    public NotificationCompat$Builder a;

    /* renamed from: b, reason: collision with root package name */
    public CharSequence f20231b;

    /* renamed from: c, reason: collision with root package name */
    public CharSequence f20232c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f20233d = false;

    /* JADX WARN: Removed duplicated region for block: B:31:0x0099  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x018f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static v0 d(Notification notification) {
        v0 v0Var;
        Bundle bundle = notification.extras;
        if (bundle != null) {
            String string = bundle.getString("androidx.core.app.extra.COMPAT_TEMPLATE");
            if (string != null) {
                switch (string) {
                    case "androidx.core.app.NotificationCompat$ProgressStyle":
                        v0Var = new u0();
                        break;
                    case "androidx.core.app.NotificationCompat$DecoratedCustomViewStyle":
                        v0Var = new k0();
                        break;
                    case "androidx.core.app.NotificationCompat$BigPictureStyle":
                        v0Var = new x();
                        break;
                    case "androidx.core.app.NotificationCompat$CallStyle":
                        v0Var = new i0();
                        break;
                    case "androidx.core.app.NotificationCompat$InboxStyle":
                        v0Var = new y(1);
                        break;
                    case "androidx.core.app.NotificationCompat$BigTextStyle":
                        v0Var = new y(0);
                        break;
                    case "androidx.core.app.NotificationCompat$MessagingStyle":
                        v0Var = new NotificationCompat$MessagingStyle();
                        break;
                }
                if (v0Var == null) {
                    if (bundle.containsKey("android.selfDisplayName") || bundle.containsKey("android.messagingStyleUser")) {
                        v0Var = new NotificationCompat$MessagingStyle();
                    } else if (bundle.containsKey("android.picture") || bundle.containsKey("android.pictureIcon")) {
                        v0Var = new x();
                    } else if (bundle.containsKey("android.bigText")) {
                        v0Var = new y(0);
                    } else if (bundle.containsKey("android.textLines")) {
                        v0Var = new y(1);
                    } else if (bundle.containsKey("android.callType")) {
                        v0Var = new i0();
                    } else if (bundle.containsKey("android.progressSegments") || bundle.containsKey("android.progressPoints")) {
                        v0Var = new u0();
                    } else {
                        String string2 = bundle.getString("android.template");
                        if (string2 != null) {
                            if (string2.equals(Notification.BigPictureStyle.class.getName())) {
                                v0Var = new x();
                            } else if (string2.equals(Notification.BigTextStyle.class.getName())) {
                                v0Var = new y(0);
                            } else if (string2.equals(Notification.InboxStyle.class.getName())) {
                                v0Var = new y(1);
                            } else if (Build.VERSION.SDK_INT >= 36 && string2.equals(Notification.ProgressStyle.class.getName())) {
                                v0Var = new u0();
                            } else if (string2.equals(Notification.MessagingStyle.class.getName())) {
                                v0Var = new NotificationCompat$MessagingStyle();
                            } else if (string2.equals(Notification.DecoratedCustomViewStyle.class.getName())) {
                                v0Var = new k0();
                            }
                        }
                        v0Var = null;
                    }
                }
                if (v0Var != null) {
                    try {
                        v0Var.f(bundle);
                        return v0Var;
                    } catch (ClassCastException unused) {
                        return null;
                    }
                }
            }
            v0Var = null;
            if (v0Var == null) {
            }
            if (v0Var != null) {
            }
        }
        return null;
    }

    public void a(Bundle bundle) {
        if (this.f20233d) {
            bundle.putCharSequence("android.summaryText", this.f20232c);
        }
        CharSequence charSequence = this.f20231b;
        if (charSequence != null) {
            bundle.putCharSequence("android.title.big", charSequence);
        }
        bundle.putString("androidx.core.app.extra.COMPAT_TEMPLATE", e());
    }

    public abstract void b(ad.d0 d0Var);

    public void c(Bundle bundle) {
        bundle.remove("android.summaryText");
        bundle.remove("android.title.big");
        bundle.remove("androidx.core.app.extra.COMPAT_TEMPLATE");
    }

    public abstract String e();

    public void f(Bundle bundle) {
        if (bundle.containsKey("android.summaryText")) {
            this.f20232c = bundle.getCharSequence("android.summaryText");
            this.f20233d = true;
        }
        this.f20231b = bundle.getCharSequence("android.title.big");
    }
}
