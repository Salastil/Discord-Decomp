package m4;

import android.graphics.Paint;
import android.graphics.PointF;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.os.Build;
import android.os.LocaleList;
import x4.g;

/* loaded from: classes.dex */
public final class a extends Paint {
    public final /* synthetic */ int a;

    @Override // android.graphics.Paint
    public void setAlpha(int i5) {
        switch (this.a) {
            case 0:
                if (Build.VERSION.SDK_INT >= 30) {
                    PointF pointF = g.a;
                    super.setAlpha(Math.max(0, Math.min(255, i5)));
                    break;
                } else {
                    int color = getColor();
                    PointF pointF2 = g.a;
                    setColor((Math.max(0, Math.min(255, i5)) << 24) | (color & 16777215));
                    break;
                }
            default:
                super.setAlpha(i5);
                break;
        }
    }

    @Override // android.graphics.Paint
    public void setTextLocales(LocaleList localeList) {
        switch (this.a) {
            case 0:
                break;
            default:
                super.setTextLocales(localeList);
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(int i5, int i6) {
        super(i5);
        this.a = i6;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(PorterDuff.Mode mode) {
        super(1);
        this.a = 0;
        setXfermode(new PorterDuffXfermode(mode));
    }

    private final void a(LocaleList localeList) {
    }
}
