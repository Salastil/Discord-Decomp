package x0;

import android.app.Notification;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import androidx.core.app.NotificationCompat$Builder;
import androidx.core.graphics.drawable.IconCompat;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class u0 extends v0 {

    /* renamed from: h, reason: collision with root package name */
    public boolean f20228h;
    public IconCompat j;
    public IconCompat k;

    /* renamed from: l, reason: collision with root package name */
    public IconCompat f20230l;

    /* renamed from: e, reason: collision with root package name */
    public ArrayList f20225e = new ArrayList();

    /* renamed from: f, reason: collision with root package name */
    public ArrayList f20226f = new ArrayList();

    /* renamed from: g, reason: collision with root package name */
    public int f20227g = 0;

    /* renamed from: i, reason: collision with root package name */
    public boolean f20229i = true;

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
    public final void a(Bundle bundle) {
        super.a(bundle);
        if (Build.VERSION.SDK_INT < 36) {
            ArrayList arrayList = this.f20225e;
            ArrayList<? extends Parcelable> arrayList2 = new ArrayList<>();
            if (arrayList != null && !arrayList.isEmpty()) {
                for (int i5 = 0; i5 < arrayList.size(); i5++) {
                    t0 t0Var = (t0) arrayList.get(i5);
                    if (t0Var.a > 0) {
                        Bundle bundle2 = new Bundle();
                        bundle2.putInt("length", t0Var.a);
                        bundle2.putInt(StackTraceHelper.ID_KEY, t0Var.f20215b);
                        bundle2.putInt("colorInt", t0Var.f20216c);
                        arrayList2.add(bundle2);
                    }
                }
            }
            bundle.putParcelableArrayList("android.progressSegments", arrayList2);
            ArrayList arrayList3 = this.f20226f;
            ArrayList<? extends Parcelable> arrayList4 = new ArrayList<>();
            if (arrayList3 != null && !arrayList3.isEmpty()) {
                for (int i6 = 0; i6 < arrayList3.size(); i6++) {
                    s0 s0Var = (s0) arrayList3.get(i6);
                    if (s0Var.a >= 0) {
                        Bundle bundle3 = new Bundle();
                        bundle3.putInt(ViewProps.POSITION, s0Var.a);
                        bundle3.putInt(StackTraceHelper.ID_KEY, s0Var.f20213b);
                        bundle3.putInt("colorInt", s0Var.f20214c);
                        arrayList4.add(bundle3);
                    }
                }
            }
            bundle.putParcelableArrayList("android.progressPoints", arrayList4);
            bundle.putInt("android.progress", this.f20227g);
            bundle.putBoolean("android.progressIndeterminate", this.f20228h);
            bundle.putInt("android.progressMax", h());
            bundle.putBoolean("android.styledByProgress", this.f20229i);
            NotificationCompat$Builder notificationCompat$Builder = this.a;
            Context context = notificationCompat$Builder != null ? notificationCompat$Builder.a : null;
            if (context != null) {
                IconCompat iconCompat = this.j;
                if (iconCompat != null) {
                    bundle.putParcelable("android.progressTrackerIcon", iconCompat.i(context));
                } else {
                    bundle.remove("android.progressTrackerIcon");
                }
                IconCompat iconCompat2 = this.k;
                if (iconCompat2 != null) {
                    bundle.putParcelable("android.progressStartIcon", iconCompat2.i(context));
                } else {
                    bundle.remove("android.progressStartIcon");
                }
                IconCompat iconCompat3 = this.f20230l;
                if (iconCompat3 != null) {
                    bundle.putParcelable("android.progressEndIcon", iconCompat3.i(context));
                } else {
                    bundle.remove("android.progressEndIcon");
                }
            }
        }
    }

    @Override // x0.v0
    public final void b(ad.d0 d0Var) {
        Notification.Builder builder = (Notification.Builder) d0Var.f318i;
        if (Build.VERSION.SDK_INT < 36) {
            int h6 = h();
            builder.setProgress(h6, Math.min(this.f20227g, h6), this.f20228h);
            return;
        }
        Context context = (Context) d0Var.f317e;
        Notification.ProgressStyle progressStyle = new Notification.ProgressStyle();
        r0.h(progressStyle, this.f20229i);
        r0.a(progressStyle, this.f20227g);
        r0.c(progressStyle, this.f20228h);
        IconCompat iconCompat = this.k;
        r0.f(progressStyle, iconCompat != null ? iconCompat.i(context) : null);
        IconCompat iconCompat2 = this.f20230l;
        r0.b(progressStyle, iconCompat2 != null ? iconCompat2.i(context) : null);
        IconCompat iconCompat3 = this.j;
        r0.g(progressStyle, iconCompat3 != null ? iconCompat3.i(context) : null);
        r0.d(progressStyle, this.f20226f);
        r0.e(progressStyle, this.f20225e);
        builder.setStyle(progressStyle);
    }

    @Override // x0.v0
    public final void c(Bundle bundle) {
        super.c(bundle);
        bundle.remove("android.progressSegments");
        bundle.remove("android.progress");
        bundle.remove("android.styledByProgress");
        bundle.remove("android.progressTrackerIcon");
        bundle.remove("android.progressStartIcon");
        bundle.remove("android.progressEndIcon");
        bundle.remove("android.progressPoints");
        bundle.remove("android.progressIndeterminate");
    }

    @Override // x0.v0
    public final String e() {
        return "androidx.core.app.NotificationCompat$ProgressStyle";
    }

    @Override // x0.v0
    public final void f(Bundle bundle) {
        super.f(bundle);
        ArrayList d6 = Build.VERSION.SDK_INT >= 34 ? e.e.d("android.progressSegments", bundle) : bundle.getParcelableArrayList("android.progressSegments");
        ArrayList arrayList = new ArrayList();
        if (d6 != null && !d6.isEmpty()) {
            for (int i5 = 0; i5 < d6.size(); i5++) {
                Bundle bundle2 = (Bundle) d6.get(i5);
                int i6 = bundle2.getInt("length");
                if (i6 > 0) {
                    int i10 = bundle2.getInt(StackTraceHelper.ID_KEY);
                    int i11 = bundle2.getInt("colorInt", 0);
                    t0 t0Var = new t0();
                    t0Var.a = i6;
                    t0Var.f20215b = i10;
                    t0Var.f20216c = i11;
                    arrayList.add(t0Var);
                }
            }
        }
        this.f20225e = arrayList;
        this.f20227g = bundle.getInt("android.progress", 0);
        this.f20228h = bundle.getBoolean("android.progressIndeterminate", false);
        this.f20229i = bundle.getBoolean("android.styledByProgress", true);
        ArrayList d7 = Build.VERSION.SDK_INT >= 34 ? e.e.d("android.progressPoints", bundle) : bundle.getParcelableArrayList("android.progressPoints");
        ArrayList arrayList2 = new ArrayList();
        if (d7 != null && !d7.isEmpty()) {
            for (int i12 = 0; i12 < d7.size(); i12++) {
                Bundle bundle3 = (Bundle) d7.get(i12);
                int i13 = bundle3.getInt(ViewProps.POSITION);
                if (i13 >= 0) {
                    int i14 = bundle3.getInt(StackTraceHelper.ID_KEY);
                    int i15 = bundle3.getInt("colorInt", 0);
                    s0 s0Var = new s0();
                    s0Var.a = i13;
                    s0Var.f20213b = i14;
                    s0Var.f20214c = i15;
                    arrayList2.add(s0Var);
                }
            }
        }
        this.f20226f = arrayList2;
        this.j = g((Parcelable) android.support.v4.media.session.b.p(bundle, "android.progressTrackerIcon", Icon.class));
        this.k = g((Parcelable) android.support.v4.media.session.b.p(bundle, "android.progressStartIcon", Icon.class));
        this.f20230l = g((Parcelable) android.support.v4.media.session.b.p(bundle, "android.progressEndIcon", Icon.class));
    }

    public final int h() {
        ArrayList arrayList = this.f20225e;
        if (arrayList != null && !arrayList.isEmpty()) {
            int i5 = 0;
            int i6 = 0;
            for (int i10 = 0; i10 < arrayList.size(); i10++) {
                int i11 = ((t0) arrayList.get(i10)).a;
                if (i11 > 0) {
                    try {
                        i6 = Math.addExact(i6, i11);
                        i5++;
                    } catch (ArithmeticException unused) {
                        return 100;
                    }
                }
            }
            if (i5 != 0) {
                return i6;
            }
        }
        return 100;
    }
}
