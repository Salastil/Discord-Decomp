package gh;

import android.animation.ObjectAnimator;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.provider.Settings;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class t extends o {
    public e K;
    public s L;
    public n3.p M;

    /* JADX WARN: Removed duplicated region for block: B:43:0x00ee  */
    @Override // android.graphics.drawable.Drawable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void draw(Canvas canvas) {
        Canvas canvas2;
        int i5;
        n3.p pVar;
        if (!getBounds().isEmpty() && isVisible() && canvas.getClipBounds(this.I)) {
            a aVar = this.f9307i;
            k kVar = this.f9306e;
            int i6 = 0;
            if (aVar != null && Settings.Global.getFloat(this.f9305d.getContentResolver(), "animator_duration_scale", 1.0f) == 0.0f && (pVar = this.M) != null) {
                pVar.setBounds(getBounds());
                this.M.setTint(kVar.f9291e[0]);
                this.M.draw(canvas);
                return;
            }
            canvas.save();
            e eVar = this.K;
            Rect bounds = getBounds();
            float b10 = b();
            ObjectAnimator objectAnimator = this.f9308v;
            boolean z5 = objectAnimator != null && objectAnimator.isRunning();
            ObjectAnimator objectAnimator2 = this.f9309w;
            eVar.b(canvas, bounds, b10, z5, objectAnimator2 != null && objectAnimator2.isRunning());
            int i10 = kVar.f9295i;
            int i11 = this.H;
            boolean z6 = (kVar instanceof k) && kVar.f9303s;
            boolean z7 = z6 && i10 == 0 && !kVar.a(false);
            Paint paint = this.G;
            if (z7) {
                canvas2 = canvas;
                this.K.f(canvas2, paint, 0.0f, 1.0f, kVar.f9292f, i11, 0);
            } else {
                canvas2 = canvas;
                if (z6) {
                    p pVar2 = (p) ((ArrayList) this.L.f9324b).get(0);
                    p pVar3 = (p) k0.d.f(1, (ArrayList) this.L.f9324b);
                    canvas.save();
                    canvas.rotate(pVar3.f9316f);
                    i5 = i10;
                    this.K.f(canvas2, paint, pVar3.f9312b, pVar2.a + 1.0f, kVar.f9292f, i11, i5);
                    canvas.restore();
                    while (i6 < ((ArrayList) this.L.f9324b).size()) {
                        p pVar4 = (p) ((ArrayList) this.L.f9324b).get(i6);
                        pVar4.f9315e = c();
                        this.K.e(canvas, paint, pVar4, this.H);
                        if (i6 > 0 && !z7 && z6) {
                            this.K.f(canvas2, paint, ((p) ((ArrayList) this.L.f9324b).get(i6 - 1)).f9312b, pVar4.a, kVar.f9292f, i11, i5);
                        }
                        i6++;
                        canvas2 = canvas;
                    }
                    canvas.restore();
                }
            }
            i5 = i10;
            while (i6 < ((ArrayList) this.L.f9324b).size()) {
            }
            canvas.restore();
        }
    }

    @Override // gh.o
    public final boolean e(boolean z5, boolean z6, boolean z7) {
        n3.p pVar;
        boolean e9 = super.e(z5, z6, z7);
        if (this.f9307i != null && Settings.Global.getFloat(this.f9305d.getContentResolver(), "animator_duration_scale", 1.0f) == 0.0f && (pVar = this.M) != null) {
            return pVar.setVisible(z5, z6);
        }
        if (!isRunning()) {
            this.L.c();
        }
        if (z5 && z7) {
            this.L.o();
        }
        return e9;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return this.K.g();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        return this.K.g();
    }
}
