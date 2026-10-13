package jm;

import android.view.GestureDetector;
import android.view.MotionEvent;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.yalantis.ucrop.view.GestureCropImageView;

/* loaded from: classes3.dex */
public final class x extends GestureDetector.SimpleOnGestureListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12959d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f12960e;

    public /* synthetic */ x(int i5, Object obj) {
        this.f12959d = i5;
        this.f12960e = obj;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnDoubleTapListener
    public final boolean onDoubleTap(MotionEvent motionEvent) {
        switch (this.f12959d) {
            case 0:
                y yVar = (y) this.f12960e;
                yVar.f12970m = motionEvent.getX();
                yVar.f12971n = motionEvent.getY();
                yVar.f12972o = 1;
                break;
            case 1:
                BottomSheetBehavior bottomSheetBehavior = ((sg.f) this.f12960e).f18024e;
                if (bottomSheetBehavior != null && bottomSheetBehavior.I) {
                    bottomSheetBehavior.P(5);
                    break;
                } else {
                    break;
                }
            default:
                GestureCropImageView gestureCropImageView = (GestureCropImageView) this.f12960e;
                float doubleTapTargetScale = gestureCropImageView.getDoubleTapTargetScale();
                float x5 = motionEvent.getX();
                float y5 = motionEvent.getY();
                if (doubleTapTargetScale > gestureCropImageView.getMaxScale()) {
                    doubleTapTargetScale = gestureCropImageView.getMaxScale();
                }
                float currentScale = gestureCropImageView.getCurrentScale();
                zn.b bVar = new zn.b(gestureCropImageView, currentScale, doubleTapTargetScale - currentScale, x5, y5);
                gestureCropImageView.S = bVar;
                gestureCropImageView.post(bVar);
                break;
        }
        return super.onDoubleTap(motionEvent);
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public boolean onDown(MotionEvent motionEvent) {
        switch (this.f12959d) {
            case 1:
                return ((sg.f) this.f12960e).isClickable();
            default:
                return super.onDown(motionEvent);
        }
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f2, float f10) {
        switch (this.f12959d) {
            case 2:
                ((GestureCropImageView) this.f12960e).d(-f2, -f10);
                return true;
            default:
                return super.onScroll(motionEvent, motionEvent2, f2, f10);
        }
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnDoubleTapListener
    public boolean onSingleTapConfirmed(MotionEvent motionEvent) {
        switch (this.f12959d) {
            case 1:
                return ((sg.f) this.f12960e).a();
            default:
                return super.onSingleTapConfirmed(motionEvent);
        }
    }
}
