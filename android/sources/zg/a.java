package zg;

import android.R;
import android.app.Dialog;
import android.graphics.Rect;
import android.graphics.RectF;
import android.os.Build;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;

/* loaded from: classes3.dex */
public final class a implements View.OnTouchListener {

    /* renamed from: d, reason: collision with root package name */
    public final Dialog f21238d;

    /* renamed from: e, reason: collision with root package name */
    public final int f21239e;

    /* renamed from: i, reason: collision with root package name */
    public final int f21240i;

    /* renamed from: v, reason: collision with root package name */
    public final int f21241v;

    public a(Dialog dialog, Rect rect) {
        this.f21238d = dialog;
        this.f21239e = rect.left;
        this.f21240i = rect.top;
        this.f21241v = ViewConfiguration.get(dialog.getContext()).getScaledWindowTouchSlop();
    }

    @Override // android.view.View.OnTouchListener
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        View findViewById = view.findViewById(R.id.content);
        int left = findViewById.getLeft() + this.f21239e;
        int width = findViewById.getWidth() + left;
        if (new RectF(left, findViewById.getTop() + this.f21240i, width, findViewById.getHeight() + r4).contains(motionEvent.getX(), motionEvent.getY())) {
            return false;
        }
        MotionEvent obtain = MotionEvent.obtain(motionEvent);
        if (motionEvent.getAction() == 1) {
            obtain.setAction(4);
        }
        if (Build.VERSION.SDK_INT < 28) {
            obtain.setAction(0);
            int i5 = this.f21241v;
            obtain.setLocation((-i5) - 1, (-i5) - 1);
        }
        view.performClick();
        return this.f21238d.onTouchEvent(obtain);
    }
}
