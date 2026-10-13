package androidx.appcompat.widget;

import android.os.Handler;
import android.view.MotionEvent;
import android.view.View;

/* loaded from: classes.dex */
public final class f2 implements View.OnTouchListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ g2 f953d;

    public f2(g2 g2Var) {
        this.f953d = g2Var;
    }

    @Override // android.view.View.OnTouchListener
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        g2 g2Var = this.f953d;
        c2 c2Var = g2Var.O;
        Handler handler = g2Var.S;
        b0 b0Var = g2Var.W;
        int action = motionEvent.getAction();
        int x5 = (int) motionEvent.getX();
        int y5 = (int) motionEvent.getY();
        if (action == 0 && b0Var != null && b0Var.isShowing() && x5 >= 0 && x5 < b0Var.getWidth() && y5 >= 0 && y5 < b0Var.getHeight()) {
            handler.postDelayed(c2Var, 250L);
            return false;
        }
        if (action != 1) {
            return false;
        }
        handler.removeCallbacks(c2Var);
        return false;
    }
}
