package androidx.appcompat.widget;

import android.app.Notification;
import android.content.Intent;
import android.graphics.Typeface;
import android.os.Bundle;
import android.os.Parcelable;
import android.view.View;
import android.widget.TextView;
import androidx.work.impl.foreground.SystemForegroundService;
import com.google.android.material.bottomsheet.BottomSheetBehavior;

/* loaded from: classes.dex */
public final class v0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1132d;

    /* renamed from: e, reason: collision with root package name */
    public final int f1133e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f1134i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f1135v;

    public /* synthetic */ v0(Object obj, int i5, Parcelable parcelable, int i6) {
        this.f1132d = i6;
        this.f1135v = obj;
        this.f1133e = i5;
        this.f1134i = parcelable;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1132d) {
            case 0:
                ((TextView) this.f1134i).setTypeface((Typeface) this.f1135v, this.f1133e);
                break;
            case 1:
                ((SystemForegroundService) this.f1135v).f2595w.notify(this.f1133e, (Notification) this.f1134i);
                break;
            case 2:
                ((q.g) this.f1135v).f16637g.onNavigationEvent(this.f1133e, (Bundle) this.f1134i);
                break;
            case 3:
                ((BottomSheetBehavior) this.f1135v).S((View) this.f1134i, this.f1133e, false);
                break;
            case 4:
                try {
                    ((th.x0) this.f1134i).i(this.f1133e, 4, (String) this.f1135v);
                    break;
                } catch (wh.a e9) {
                    th.x0.f18616h.g("notifyModuleCompleted failed", e9);
                    return;
                }
            default:
                ((y3.i) this.f1134i).a(this.f1133e, (Intent) this.f1135v);
                break;
        }
    }

    public /* synthetic */ v0(Object obj, Object obj2, int i5, int i6) {
        this.f1132d = i6;
        this.f1134i = obj;
        this.f1135v = obj2;
        this.f1133e = i5;
    }

    public /* synthetic */ v0(th.x0 x0Var, int i5, String str) {
        this.f1132d = 4;
        this.f1134i = x0Var;
        this.f1133e = i5;
        this.f1135v = str;
    }

    public v0(BottomSheetBehavior bottomSheetBehavior, View view, int i5) {
        this.f1132d = 3;
        this.f1135v = bottomSheetBehavior;
        this.f1134i = view;
        this.f1133e = i5;
    }
}
