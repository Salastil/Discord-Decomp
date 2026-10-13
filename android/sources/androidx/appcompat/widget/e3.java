package androidx.appcompat.widget;

import android.graphics.Rect;
import android.view.MotionEvent;
import android.view.TouchDelegate;
import android.view.View;
import android.view.ViewConfiguration;

/* loaded from: classes.dex */
public final class e3 extends TouchDelegate {
    public final View a;

    /* renamed from: b, reason: collision with root package name */
    public final Rect f948b;

    /* renamed from: c, reason: collision with root package name */
    public final Rect f949c;

    /* renamed from: d, reason: collision with root package name */
    public final Rect f950d;

    /* renamed from: e, reason: collision with root package name */
    public final int f951e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f952f;

    public e3(View view, Rect rect, Rect rect2) {
        super(rect, view);
        int scaledTouchSlop = ViewConfiguration.get(view.getContext()).getScaledTouchSlop();
        this.f951e = scaledTouchSlop;
        Rect rect3 = new Rect();
        this.f948b = rect3;
        Rect rect4 = new Rect();
        this.f950d = rect4;
        Rect rect5 = new Rect();
        this.f949c = rect5;
        rect3.set(rect);
        rect4.set(rect);
        int i5 = -scaledTouchSlop;
        rect4.inset(i5, i5);
        rect5.set(rect2);
        this.a = view;
    }

    @Override // android.view.TouchDelegate
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        boolean z5;
        boolean z6;
        int x5 = (int) motionEvent.getX();
        int y5 = (int) motionEvent.getY();
        int action = motionEvent.getAction();
        boolean z7 = true;
        if (action != 0) {
            if (action == 1 || action == 2) {
                z6 = this.f952f;
                if (z6 && !this.f950d.contains(x5, y5)) {
                    z7 = z6;
                    z5 = false;
                }
            } else {
                if (action == 3) {
                    z6 = this.f952f;
                    this.f952f = false;
                }
                z5 = true;
                z7 = false;
            }
            z7 = z6;
            z5 = true;
        } else {
            if (this.f948b.contains(x5, y5)) {
                this.f952f = true;
                z5 = true;
            }
            z5 = true;
            z7 = false;
        }
        if (!z7) {
            return false;
        }
        Rect rect = this.f949c;
        View view = this.a;
        if (!z5 || rect.contains(x5, y5)) {
            motionEvent.setLocation(x5 - rect.left, y5 - rect.top);
        } else {
            motionEvent.setLocation(view.getWidth() / 2, view.getHeight() / 2);
        }
        return view.dispatchTouchEvent(motionEvent);
    }
}
