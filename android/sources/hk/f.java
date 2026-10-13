package hk;

import android.view.ViewConfiguration;
import com.henninghall.date_picker.pickers.AndroidNative;

/* loaded from: classes3.dex */
public final class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public int f10037d;

    /* renamed from: e, reason: collision with root package name */
    public int f10038e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ AndroidNative f10039i;

    public f(AndroidNative androidNative) {
        this.f10039i = androidNative;
    }

    public final void a() {
        this.f10038e = 0;
        this.f10037d = 0;
        AndroidNative androidNative = this.f10039i;
        androidNative.removeCallbacks(this);
        if (androidNative.f10074x0) {
            androidNative.f10074x0 = false;
            androidNative.invalidate(0, androidNative.f10070v0, androidNative.getRight(), androidNative.getBottom());
        }
        androidNative.f10076y0 = false;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f10038e;
        AndroidNative androidNative = this.f10039i;
        if (i5 == 1) {
            int i6 = this.f10037d;
            if (i6 == 1) {
                androidNative.f10074x0 = true;
                androidNative.invalidate(0, androidNative.f10070v0, androidNative.getRight(), androidNative.getBottom());
                return;
            } else {
                if (i6 != 2) {
                    return;
                }
                androidNative.f10076y0 = true;
                androidNative.invalidate(0, 0, androidNative.getRight(), androidNative.f10068u0);
                return;
            }
        }
        if (i5 != 2) {
            return;
        }
        int i10 = this.f10037d;
        if (i10 == 1) {
            if (!androidNative.f10074x0) {
                androidNative.postDelayed(this, ViewConfiguration.getPressedStateDuration());
            }
            androidNative.f10074x0 = !androidNative.f10074x0;
            androidNative.invalidate(0, androidNative.f10070v0, androidNative.getRight(), androidNative.getBottom());
            return;
        }
        if (i10 != 2) {
            return;
        }
        if (!androidNative.f10076y0) {
            androidNative.postDelayed(this, ViewConfiguration.getPressedStateDuration());
        }
        androidNative.f10076y0 = !androidNative.f10076y0;
        androidNative.invalidate(0, 0, androidNative.getRight(), androidNative.f10068u0);
    }
}
