package androidx.core.view;

import android.content.Context;
import android.content.res.Resources;
import android.os.Build;
import android.view.InputDevice;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.Objects;

/* loaded from: classes.dex */
public final class DifferentialMotionFlingController {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final DifferentialMotionFlingTarget f1533b;

    /* renamed from: c, reason: collision with root package name */
    public VelocityTracker f1534c;

    /* renamed from: d, reason: collision with root package name */
    public float f1535d;

    /* renamed from: e, reason: collision with root package name */
    public int f1536e = -1;

    /* renamed from: f, reason: collision with root package name */
    public int f1537f = -1;

    /* renamed from: g, reason: collision with root package name */
    public int f1538g = -1;

    /* renamed from: h, reason: collision with root package name */
    public final int[] f1539h = {Integer.MAX_VALUE, 0};

    public DifferentialMotionFlingController(Context context, DifferentialMotionFlingTarget differentialMotionFlingTarget) {
        this.a = context;
        this.f1533b = differentialMotionFlingTarget;
    }

    /* JADX WARN: Code restructure failed: missing block: B:129:0x00bc, code lost:
    
        if (r5 >= 0) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:146:0x0075, code lost:
    
        if (r14 >= 0) goto L31;
     */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0230  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0238  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(MotionEvent motionEvent, int i5) {
        int i6;
        int i10;
        int i11;
        int i12;
        boolean z5;
        float f2;
        float f10;
        long j;
        float f11;
        float sqrt;
        float f12;
        float f13;
        int source = motionEvent.getSource();
        int deviceId = motionEvent.getDeviceId();
        int i13 = this.f1537f;
        int[] iArr = this.f1539h;
        if (i13 == source && this.f1538g == deviceId && this.f1536e == i5) {
            z5 = false;
            i6 = 1;
            i10 = 0;
        } else {
            Context context = this.a;
            ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
            int deviceId2 = motionEvent.getDeviceId();
            int source2 = motionEvent.getSource();
            i6 = 1;
            int i14 = Build.VERSION.SDK_INT;
            i10 = 0;
            if (i14 >= 34) {
                Method method = t0.a;
                i11 = a2.a.j(viewConfiguration, deviceId2, i5, source2);
            } else {
                Method method2 = t0.a;
                InputDevice device = InputDevice.getDevice(deviceId2);
                if (device != null && device.getMotionRange(i5, source2) != null) {
                    Resources resources = context.getResources();
                    int identifier = (source2 == 4194304 && i5 == 26) ? resources.getIdentifier("config_viewMinRotaryEncoderFlingVelocity", "dimen", "android") : -1;
                    Objects.requireNonNull(viewConfiguration);
                    if (identifier == -1) {
                        i11 = viewConfiguration.getScaledMinimumFlingVelocity();
                    } else if (identifier != 0) {
                        i11 = resources.getDimensionPixelSize(identifier);
                    }
                }
                i11 = Integer.MAX_VALUE;
            }
            iArr[0] = i11;
            int deviceId3 = motionEvent.getDeviceId();
            int source3 = motionEvent.getSource();
            if (i14 >= 34) {
                i12 = a2.a.i(viewConfiguration, deviceId3, i5, source3);
            } else {
                InputDevice device2 = InputDevice.getDevice(deviceId3);
                if (device2 != null && device2.getMotionRange(i5, source3) != null) {
                    Resources resources2 = context.getResources();
                    int identifier2 = (source3 == 4194304 && i5 == 26) ? resources2.getIdentifier("config_viewMaxRotaryEncoderFlingVelocity", "dimen", "android") : -1;
                    Objects.requireNonNull(viewConfiguration);
                    if (identifier2 == -1) {
                        i12 = viewConfiguration.getScaledMaximumFlingVelocity();
                    } else if (identifier2 != 0) {
                        i12 = resources2.getDimensionPixelSize(identifier2);
                    }
                }
                i12 = Integer.MIN_VALUE;
            }
            iArr[1] = i12;
            this.f1537f = source;
            this.f1538g = deviceId;
            this.f1536e = i5;
            z5 = true;
        }
        if (iArr[i10] == Integer.MAX_VALUE) {
            VelocityTracker velocityTracker = this.f1534c;
            if (velocityTracker != null) {
                velocityTracker.recycle();
                this.f1534c = null;
                return;
            }
            return;
        }
        if (this.f1534c == null) {
            this.f1534c = VelocityTracker.obtain();
        }
        VelocityTracker velocityTracker2 = this.f1534c;
        Map map = b0.a;
        velocityTracker2.addMovement(motionEvent);
        float f14 = 0.0f;
        int i15 = 20;
        if (Build.VERSION.SDK_INT < 34 && motionEvent.getSource() == 4194304) {
            Map map2 = b0.a;
            if (!map2.containsKey(velocityTracker2)) {
                map2.put(velocityTracker2, new c0());
            }
            c0 c0Var = (c0) map2.get(velocityTracker2);
            long[] jArr = c0Var.f1568b;
            long eventTime = motionEvent.getEventTime();
            if (c0Var.f1570d != 0 && eventTime - jArr[c0Var.f1571e] > 40) {
                c0Var.f1570d = i10;
                c0Var.f1569c = 0.0f;
            }
            int i16 = (c0Var.f1571e + 1) % 20;
            c0Var.f1571e = i16;
            int i17 = c0Var.f1570d;
            if (i17 != 20) {
                c0Var.f1570d = i17 + 1;
            }
            c0Var.a[i16] = motionEvent.getAxisValue(26);
            jArr[c0Var.f1571e] = eventTime;
        }
        velocityTracker2.computeCurrentVelocity(1000, Float.MAX_VALUE);
        c0 c0Var2 = (c0) b0.a.get(velocityTracker2);
        if (c0Var2 != null) {
            float[] fArr = c0Var2.a;
            long[] jArr2 = c0Var2.f1568b;
            int i18 = c0Var2.f1570d;
            if (i18 >= 2) {
                int i19 = c0Var2.f1571e;
                int i20 = ((i19 + 20) - (i18 - 1)) % 20;
                long j5 = jArr2[i19];
                while (true) {
                    j = jArr2[i20];
                    if (j5 - j <= 100) {
                        break;
                    }
                    c0Var2.f1570d--;
                    i20 = (i20 + 1) % 20;
                }
                int i21 = c0Var2.f1570d;
                if (i21 >= 2) {
                    if (i21 == 2) {
                        int i22 = (i20 + 1) % 20;
                        if (j != jArr2[i22]) {
                            sqrt = fArr[i22] / (r13 - j);
                            f11 = Float.MAX_VALUE;
                            f2 = 0.0f;
                        }
                    } else {
                        f11 = Float.MAX_VALUE;
                        float f15 = 0.0f;
                        int i23 = 0;
                        int i24 = 0;
                        while (true) {
                            if (i23 >= c0Var2.f1570d - 1) {
                                break;
                            }
                            int i25 = i23 + i20;
                            long j7 = jArr2[i25 % 20];
                            int i26 = (i25 + 1) % i15;
                            if (jArr2[i26] == j7) {
                                f12 = f14;
                            } else {
                                i24++;
                                f12 = f14;
                                float sqrt2 = (f15 < f14 ? -1.0f : 1.0f) * ((float) Math.sqrt(Math.abs(f15) * 2.0f));
                                float f16 = fArr[i26] / (jArr2[i26] - j7);
                                f15 += Math.abs(f16) * (f16 - sqrt2);
                                if (i24 == i6) {
                                    f15 *= 0.5f;
                                }
                            }
                            i23++;
                            f14 = f12;
                            i15 = 20;
                            i6 = 1;
                        }
                        f2 = f14;
                        sqrt = (f15 < f2 ? -1.0f : 1.0f) * ((float) Math.sqrt(Math.abs(f15) * 2.0f));
                    }
                    f13 = sqrt * 1000;
                    c0Var2.f1569c = f13;
                    if (f13 >= (-Math.abs(f11))) {
                        c0Var2.f1569c = -Math.abs(f11);
                    } else if (c0Var2.f1569c > Math.abs(f11)) {
                        c0Var2.f1569c = Math.abs(f11);
                    }
                }
            }
            f11 = Float.MAX_VALUE;
            sqrt = 0.0f;
            f2 = 0.0f;
            f13 = sqrt * 1000;
            c0Var2.f1569c = f13;
            if (f13 >= (-Math.abs(f11))) {
            }
        } else {
            f2 = 0.0f;
        }
        if (Build.VERSION.SDK_INT >= 34) {
            f10 = a2.a.f(velocityTracker2, i5);
        } else if (i5 == 0) {
            f10 = velocityTracker2.getXVelocity();
        } else if (i5 == 1) {
            f10 = velocityTracker2.getYVelocity();
        } else {
            c0 c0Var3 = (c0) b0.a.get(velocityTracker2);
            f10 = (c0Var3 == null || i5 != 26) ? f2 : c0Var3.f1569c;
        }
        DifferentialMotionFlingTarget differentialMotionFlingTarget = this.f1533b;
        float b10 = differentialMotionFlingTarget.b() * f10;
        float signum = Math.signum(b10);
        if (z5 || (signum != Math.signum(this.f1535d) && signum != f2)) {
            differentialMotionFlingTarget.c();
        }
        if (Math.abs(b10) < iArr[0]) {
            return;
        }
        float max = Math.max(-r1, Math.min(b10, iArr[1]));
        this.f1535d = differentialMotionFlingTarget.a(max) ? max : f2;
    }
}
