package x0;

import android.app.Notification;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import androidx.core.graphics.drawable.IconCompat;

/* loaded from: classes.dex */
public final class x extends v0 {

    /* renamed from: e, reason: collision with root package name */
    public IconCompat f20234e;

    /* renamed from: f, reason: collision with root package name */
    public IconCompat f20235f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f20236g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f20237h;

    public static IconCompat g(Parcelable parcelable) {
        if (parcelable == null) {
            return null;
        }
        if (parcelable instanceof Icon) {
            PorterDuff.Mode mode = IconCompat.k;
            return ki.b.l((Icon) parcelable);
        }
        if (parcelable instanceof Bitmap) {
            return IconCompat.c((Bitmap) parcelable);
        }
        return null;
    }

    @Override // x0.v0
    public final void b(ad.d0 d0Var) {
        Notification.Builder builder = (Notification.Builder) d0Var.f318i;
        Context context = (Context) d0Var.f317e;
        Notification.BigPictureStyle bigContentTitle = new Notification.BigPictureStyle(builder).setBigContentTitle(this.f20231b);
        IconCompat iconCompat = this.f20234e;
        if (iconCompat != null) {
            if (Build.VERSION.SDK_INT >= 31) {
                w.a(bigContentTitle, iconCompat.i(context));
            } else {
                int i5 = iconCompat.a;
                if (i5 == -1) {
                    i5 = ki.b.G(iconCompat.f1515b);
                }
                if (i5 == 1) {
                    bigContentTitle = bigContentTitle.bigPicture(this.f20234e.e());
                }
            }
        }
        if (this.f20236g) {
            IconCompat iconCompat2 = this.f20235f;
            if (iconCompat2 == null) {
                bigContentTitle.bigLargeIcon((Bitmap) null);
            } else {
                v.a(bigContentTitle, iconCompat2.i(context));
            }
        }
        if (this.f20233d) {
            bigContentTitle.setSummaryText(this.f20232c);
        }
        if (Build.VERSION.SDK_INT >= 31) {
            w.c(bigContentTitle, this.f20237h);
            w.b(bigContentTitle, null);
        }
    }

    @Override // x0.v0
    public final void c(Bundle bundle) {
        super.c(bundle);
        bundle.remove("android.largeIcon.big");
        bundle.remove("android.picture");
        bundle.remove("android.pictureIcon");
        bundle.remove("android.showBigPictureWhenCollapsed");
    }

    @Override // x0.v0
    public final String e() {
        return "androidx.core.app.NotificationCompat$BigPictureStyle";
    }

    @Override // x0.v0
    public final void f(Bundle bundle) {
        super.f(bundle);
        if (bundle.containsKey("android.largeIcon.big")) {
            this.f20235f = g(bundle.getParcelable("android.largeIcon.big"));
            this.f20236g = true;
        }
        Parcelable parcelable = bundle.getParcelable("android.picture");
        this.f20234e = parcelable != null ? g(parcelable) : g(bundle.getParcelable("android.pictureIcon"));
        this.f20237h = bundle.getBoolean("android.showBigPictureWhenCollapsed");
    }
}
