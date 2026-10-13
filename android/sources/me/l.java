package me;

import android.content.Context;
import android.graphics.PointF;
import android.opengl.Matrix;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;

/* loaded from: classes3.dex */
public final class l extends GestureDetector.SimpleOnGestureListener implements View.OnTouchListener, c {

    /* renamed from: i, reason: collision with root package name */
    public final j f14488i;

    /* renamed from: w, reason: collision with root package name */
    public final GestureDetector f14490w;

    /* renamed from: d, reason: collision with root package name */
    public final PointF f14486d = new PointF();

    /* renamed from: e, reason: collision with root package name */
    public final PointF f14487e = new PointF();

    /* renamed from: v, reason: collision with root package name */
    public final float f14489v = 25.0f;

    /* renamed from: x, reason: collision with root package name */
    public volatile float f14491x = 3.1415927f;

    public l(Context context, j jVar) {
        this.f14488i = jVar;
        this.f14490w = new GestureDetector(context, this);
    }

    @Override // me.c
    public final void a(float f2, float[] fArr) {
        this.f14491x = -f2;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onDown(MotionEvent motionEvent) {
        this.f14486d.set(motionEvent.getX(), motionEvent.getY());
        return true;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f2, float f10) {
        float x5 = (motionEvent2.getX() - this.f14486d.x) / this.f14489v;
        float y5 = motionEvent2.getY();
        PointF pointF = this.f14486d;
        float f11 = (y5 - pointF.y) / this.f14489v;
        pointF.set(motionEvent2.getX(), motionEvent2.getY());
        double d6 = this.f14491x;
        float cos = (float) Math.cos(d6);
        float sin = (float) Math.sin(d6);
        PointF pointF2 = this.f14487e;
        pointF2.x -= (cos * x5) - (sin * f11);
        float f12 = (cos * f11) + (sin * x5) + pointF2.y;
        pointF2.y = f12;
        pointF2.y = Math.max(-45.0f, Math.min(45.0f, f12));
        j jVar = this.f14488i;
        PointF pointF3 = this.f14487e;
        synchronized (jVar) {
            float f13 = pointF3.y;
            jVar.f14478y = f13;
            Matrix.setRotateM(jVar.f14476w, 0, -f13, (float) Math.cos(jVar.E), (float) Math.sin(jVar.E), 0.0f);
            Matrix.setRotateM(jVar.f14477x, 0, -pointF3.x, 0.0f, 1.0f, 0.0f);
        }
        return true;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onSingleTapUp(MotionEvent motionEvent) {
        return this.f14488i.H.performClick();
    }

    @Override // android.view.View.OnTouchListener
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        return this.f14490w.onTouchEvent(motionEvent);
    }
}
