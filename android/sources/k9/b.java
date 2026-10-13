package k9;

import android.graphics.drawable.Drawable;
import android.os.SystemClock;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import com.facebook.drawee.span.SimpleDraweeSpanTextView;
import n3.f;

/* loaded from: classes3.dex */
public final class b implements Drawable.Callback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13240d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f13241e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f13240d = i5;
        this.f13241e = obj;
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void invalidateDrawable(Drawable drawable) {
        switch (this.f13240d) {
            case 0:
                SimpleDraweeSpanTextView simpleDraweeSpanTextView = ((DraweeSpanStringBuilder) this.f13241e).f4501v;
                if (simpleDraweeSpanTextView != null) {
                    simpleDraweeSpanTextView.invalidate();
                    break;
                }
                break;
            default:
                ((f) this.f13241e).invalidateSelf();
                break;
        }
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void scheduleDrawable(Drawable drawable, Runnable runnable, long j) {
        switch (this.f13240d) {
            case 0:
                DraweeSpanStringBuilder draweeSpanStringBuilder = (DraweeSpanStringBuilder) this.f13241e;
                if (draweeSpanStringBuilder.f4501v != null) {
                    draweeSpanStringBuilder.f4501v.postDelayed(runnable, j - SystemClock.uptimeMillis());
                    break;
                }
                break;
            default:
                ((f) this.f13241e).scheduleSelf(runnable, j);
                break;
        }
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void unscheduleDrawable(Drawable drawable, Runnable runnable) {
        switch (this.f13240d) {
            case 0:
                SimpleDraweeSpanTextView simpleDraweeSpanTextView = ((DraweeSpanStringBuilder) this.f13241e).f4501v;
                if (simpleDraweeSpanTextView != null) {
                    simpleDraweeSpanTextView.removeCallbacks(runnable);
                    break;
                }
                break;
            default:
                ((f) this.f13241e).unscheduleSelf(runnable);
                break;
        }
    }
}
