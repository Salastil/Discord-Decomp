package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import java.util.HashMap;

/* loaded from: classes.dex */
public class Barrier extends b {
    public int E;
    public int F;
    public r0.a G;

    public Barrier(Context context) {
        super(context);
        this.f1326d = new int[32];
        this.f1332y = new HashMap();
        this.f1328i = context;
        h(null);
        super.setVisibility(8);
    }

    public boolean getAllowsGoneWidget() {
        return this.G.f17060s0;
    }

    public int getMargin() {
        return this.G.f17061t0;
    }

    public int getType() {
        return this.E;
    }

    @Override // androidx.constraintlayout.widget.b
    public final void h(AttributeSet attributeSet) {
        super.h(attributeSet);
        r0.a aVar = new r0.a();
        aVar.f17059r0 = 0;
        aVar.f17060s0 = true;
        aVar.f17061t0 = 0;
        aVar.f17062u0 = false;
        this.G = aVar;
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = getContext().obtainStyledAttributes(attributeSet, m.f1413b);
            int indexCount = obtainStyledAttributes.getIndexCount();
            for (int i5 = 0; i5 < indexCount; i5++) {
                int index = obtainStyledAttributes.getIndex(i5);
                if (index == 26) {
                    setType(obtainStyledAttributes.getInt(index, 0));
                } else if (index == 25) {
                    this.G.f17060s0 = obtainStyledAttributes.getBoolean(index, true);
                } else if (index == 27) {
                    this.G.f17061t0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                }
            }
            obtainStyledAttributes.recycle();
        }
        this.f1329v = this.G;
        k();
    }

    @Override // androidx.constraintlayout.widget.b
    public final void i(ConstraintWidget constraintWidget, boolean z5) {
        int i5 = this.E;
        this.F = i5;
        if (z5) {
            if (i5 == 5) {
                this.F = 1;
            } else if (i5 == 6) {
                this.F = 0;
            }
        } else if (i5 == 5) {
            this.F = 0;
        } else if (i5 == 6) {
            this.F = 1;
        }
        if (constraintWidget instanceof r0.a) {
            ((r0.a) constraintWidget).f17059r0 = this.F;
        }
    }

    public void setAllowsGoneWidget(boolean z5) {
        this.G.f17060s0 = z5;
    }

    public void setDpMargin(int i5) {
        this.G.f17061t0 = (int) ((i5 * getResources().getDisplayMetrics().density) + 0.5f);
    }

    public void setMargin(int i5) {
        this.G.f17061t0 = i5;
    }

    public void setType(int i5) {
        this.E = i5;
    }

    public Barrier(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        super.setVisibility(8);
    }
}
