package x0;

import android.app.Notification;
import android.os.Bundle;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class y extends v0 {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f20238e;

    /* renamed from: f, reason: collision with root package name */
    public Object f20239f;

    public y(int i5) {
        this.f20238e = i5;
        switch (i5) {
            case 1:
                this.f20239f = new ArrayList();
                break;
        }
    }

    @Override // x0.v0
    public final void b(ad.d0 d0Var) {
        switch (this.f20238e) {
            case 0:
                Notification.BigTextStyle bigText = new Notification.BigTextStyle((Notification.Builder) d0Var.f318i).setBigContentTitle(this.f20231b).bigText((CharSequence) this.f20239f);
                if (this.f20233d) {
                    bigText.setSummaryText(this.f20232c);
                    break;
                }
                break;
            default:
                Notification.InboxStyle bigContentTitle = new Notification.InboxStyle((Notification.Builder) d0Var.f318i).setBigContentTitle(this.f20231b);
                if (this.f20233d) {
                    bigContentTitle.setSummaryText(this.f20232c);
                }
                Iterator it = ((ArrayList) this.f20239f).iterator();
                while (it.hasNext()) {
                    bigContentTitle.addLine((CharSequence) it.next());
                }
                break;
        }
    }

    @Override // x0.v0
    public final void c(Bundle bundle) {
        switch (this.f20238e) {
            case 0:
                super.c(bundle);
                bundle.remove("android.bigText");
                break;
            default:
                super.c(bundle);
                bundle.remove("android.textLines");
                break;
        }
    }

    @Override // x0.v0
    public final String e() {
        switch (this.f20238e) {
            case 0:
                return "androidx.core.app.NotificationCompat$BigTextStyle";
            default:
                return "androidx.core.app.NotificationCompat$InboxStyle";
        }
    }

    @Override // x0.v0
    public final void f(Bundle bundle) {
        switch (this.f20238e) {
            case 0:
                super.f(bundle);
                this.f20239f = bundle.getCharSequence("android.bigText");
                break;
            default:
                super.f(bundle);
                ArrayList arrayList = (ArrayList) this.f20239f;
                arrayList.clear();
                if (bundle.containsKey("android.textLines")) {
                    Collections.addAll(arrayList, bundle.getCharSequenceArray("android.textLines"));
                    break;
                }
                break;
        }
    }
}
