package nl;

import a5.r;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.drawable.BitmapDrawable;
import android.os.Build;
import android.util.Log;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import androidx.appcompat.widget.g0;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.i18nmanager.I18nUtil;
import io.sentry.o;
import java.util.List;
import java.util.Timer;
import java.util.concurrent.Executors;

/* loaded from: classes3.dex */
public final class a extends g0 {
    public String E;
    public List F;
    public double G;
    public int H;
    public double I;
    public int J;
    public int K;
    public String L;
    public Integer M;

    /* renamed from: e, reason: collision with root package name */
    public double f15542e;

    /* renamed from: i, reason: collision with root package name */
    public double f15543i;

    /* renamed from: v, reason: collision with root package name */
    public double f15544v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f15545w;

    /* renamed from: x, reason: collision with root package name */
    public double f15546x;

    /* renamed from: y, reason: collision with root package name */
    public double f15547y;

    public a(Context context) {
        super(context, null);
        this.f15542e = 0.0d;
        this.f15543i = 0.0d;
        this.f15544v = 0.0d;
        this.f15545w = false;
        this.f15546x = 0.0d;
        this.f15547y = 0.0d;
        this.G = -9.223372036854776E18d;
        this.I = 9.223372036854776E18d;
        this.K = 0;
        this.L = null;
        this.M = null;
        setLayoutDirection(I18nUtil.getInstance().isRTL(context) ? 1 : 0);
        if (Build.VERSION.SDK_INT < 26) {
            setStateListAnimator(null);
        }
    }

    private double getStepValue() {
        double d6 = this.f15546x;
        return d6 > 0.0d ? d6 : this.f15547y;
    }

    private int getTotalSteps() {
        return (int) Math.ceil((this.f15543i - this.f15542e) / getStepValue());
    }

    public final void a() {
        if (getThumb() == null) {
            return;
        }
        if (this.M != null) {
            getThumb().setColorFilter(this.M.intValue(), PorterDuff.Mode.SRC_IN);
        } else {
            getThumb().clearColorFilter();
        }
    }

    @Override // android.view.View
    public final void announceForAccessibility(CharSequence charSequence) {
        Context context = getContext();
        AccessibilityManager accessibilityManager = (AccessibilityManager) context.getSystemService("accessibility");
        if (accessibilityManager.isEnabled()) {
            AccessibilityEvent obtain = AccessibilityEvent.obtain();
            obtain.setEventType(16384);
            obtain.setClassName(a.class.getName());
            obtain.setPackageName(context.getPackageName());
            obtain.getText().add(charSequence);
            new Timer().schedule(new o(accessibilityManager, obtain), 1000L);
        }
    }

    public final void b() {
        BitmapDrawable bitmapDrawable;
        String str = this.L;
        if (str != null) {
            try {
                bitmapDrawable = (BitmapDrawable) Executors.newSingleThreadExecutor().submit(new r(this, str, 2)).get();
            } catch (Exception e9) {
                e9.printStackTrace();
                bitmapDrawable = null;
            }
            if (bitmapDrawable != null) {
                if (this.K > 0) {
                    Bitmap bitmap = bitmapDrawable.getBitmap();
                    int i5 = this.K;
                    setThumb(new BitmapDrawable(getResources(), Bitmap.createScaledBitmap(bitmap, i5, i5, true)));
                } else {
                    setThumb(bitmapDrawable);
                }
                a();
                setSplitTrack(false);
                return;
            }
        }
        int i6 = this.K;
        if (i6 <= 0) {
            a();
            return;
        }
        Bitmap createBitmap = Bitmap.createBitmap(i6, i6, Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(createBitmap);
        Integer num = this.M;
        int intValue = num != null ? num.intValue() : getThumbTintList() != null ? getThumbTintList().getDefaultColor() : -1;
        Paint paint = new Paint(1);
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(intValue);
        float f2 = this.K / 2.0f;
        canvas.drawCircle(f2, f2, f2, paint);
        Paint paint2 = new Paint(1);
        paint2.setStyle(Paint.Style.STROKE);
        paint2.setStrokeWidth(1.0f);
        paint2.setColor(436207616);
        canvas.drawCircle(f2, f2, f2 - 0.5f, paint2);
        setThumb(new BitmapDrawable(getResources(), createBitmap));
        a();
        setSplitTrack(false);
    }

    public final double c(int i5) {
        return i5 == getMax() ? this.f15543i : (i5 * getStepValue()) + this.f15542e;
    }

    public final void d() {
        if (this.f15546x == 0.0d) {
            this.f15547y = (this.f15543i - this.f15542e) / IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        setMax(getTotalSteps());
        setKeyProgressIncrement(1);
        e();
        f();
        double d6 = this.f15544v;
        double d7 = this.f15542e;
        setProgress((int) Math.round(((d6 - d7) / (this.f15543i - d7)) * getTotalSteps()));
    }

    public final void e() {
        double max = Math.max(this.G, this.f15542e);
        double d6 = this.f15542e;
        int round = (int) Math.round(((max - d6) / (this.f15543i - d6)) * getTotalSteps());
        int i5 = this.J;
        if (round > i5) {
            Log.d("Invalid configuration", "upperLimit < lowerLimit; lowerLimit not set");
        } else {
            this.H = Math.min(round, i5);
        }
    }

    public final void f() {
        double min = Math.min(this.I, this.f15543i);
        double d6 = this.f15542e;
        int round = (int) Math.round(((min - d6) / (this.f15543i - d6)) * getTotalSteps());
        if (this.H > round) {
            Log.d("Invalid configuration", "upperLimit < lowerLimit; upperLimit not set");
        } else {
            this.J = round;
        }
    }

    public int getLowerLimit() {
        return this.H;
    }

    public int getUpperLimit() {
        return this.J;
    }

    @Override // android.view.View
    public final void onPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onPopulateAccessibilityEvent(accessibilityEvent);
        if (accessibilityEvent.getEventType() == 32768 || (accessibilityEvent.getEventType() == 4 && isAccessibilityFocused())) {
            setupAccessibility((int) this.f15544v);
        }
    }

    public void setAccessibilityIncrements(List<String> list) {
        this.F = list;
    }

    public void setAccessibilityUnits(String str) {
        this.E = str;
    }

    public void setLowerLimit(double d6) {
        this.G = d6;
        e();
    }

    public void setMaxValue(double d6) {
        this.f15543i = d6;
        d();
    }

    public void setMinValue(double d6) {
        this.f15542e = d6;
        d();
    }

    public void setStep(double d6) {
        this.f15546x = d6;
        d();
    }

    public void setThumbImage(String str) {
        this.L = str;
        b();
    }

    public void setThumbSize(float f2) {
        this.K = f2 > 0.0f ? Math.round(f2 * getResources().getDisplayMetrics().density) : 0;
        b();
    }

    public void setThumbTintColor(Integer num) {
        this.M = num;
        if (this.L != null || this.K > 0) {
            b();
        } else {
            a();
        }
    }

    public void setUpperLimit(double d6) {
        this.I = d6;
        f();
    }

    public void setValue(double d6) {
        this.f15544v = d6;
        double d7 = this.f15542e;
        setProgress((int) Math.round(((d6 - d7) / (this.f15543i - d7)) * getTotalSteps()));
    }

    public void setupAccessibility(int i5) {
        List list;
        if (this.E == null || (list = this.F) == null || list.size() - 1 != ((int) this.f15543i)) {
            return;
        }
        String str = (String) this.F.get(i5);
        int length = this.E.length();
        String str2 = this.E;
        if (str != null && Integer.parseInt(str) == 1) {
            str2 = str2.substring(0, length - 1);
        }
        announceForAccessibility(str + " " + str2);
    }
}
