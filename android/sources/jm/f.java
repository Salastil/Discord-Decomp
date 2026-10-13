package jm;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.graphics.PointF;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.core.util.Pools$SynchronizedPool;
import androidx.core.view.v0;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.FabricUIManager;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.UIManagerHelper;
import com.horcrux.svg.SvgView;
import com.horcrux.svg.VirtualView;
import java.util.ArrayList;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;

/* loaded from: classes3.dex */
public abstract class f {
    public static MotionEvent.PointerProperties[] O;
    public static MotionEvent.PointerCoords[] P;
    public static short Q;
    public boolean A;
    public float B;
    public float C;
    public int D;
    public boolean E;
    public g F;
    public r G;
    public km.i H;
    public int I;
    public int J;
    public int K;
    public boolean L;
    public boolean M;
    public boolean N;
    public final int[] a = new int[17];

    /* renamed from: b, reason: collision with root package name */
    public int f12872b;

    /* renamed from: c, reason: collision with root package name */
    public final int[] f12873c;

    /* renamed from: d, reason: collision with root package name */
    public int f12874d;

    /* renamed from: e, reason: collision with root package name */
    public String f12875e;

    /* renamed from: f, reason: collision with root package name */
    public View f12876f;

    /* renamed from: g, reason: collision with root package name */
    public km.f f12877g;

    /* renamed from: h, reason: collision with root package name */
    public int f12878h;

    /* renamed from: i, reason: collision with root package name */
    public float f12879i;
    public float j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f12880l;

    /* renamed from: m, reason: collision with root package name */
    public int f12881m;

    /* renamed from: n, reason: collision with root package name */
    public WritableArray f12882n;

    /* renamed from: o, reason: collision with root package name */
    public WritableArray f12883o;

    /* renamed from: p, reason: collision with root package name */
    public int f12884p;

    /* renamed from: q, reason: collision with root package name */
    public int f12885q;

    /* renamed from: r, reason: collision with root package name */
    public final e[] f12886r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f12887s;

    /* renamed from: t, reason: collision with root package name */
    public boolean f12888t;

    /* renamed from: u, reason: collision with root package name */
    public boolean f12889u;

    /* renamed from: v, reason: collision with root package name */
    public boolean f12890v;

    /* renamed from: w, reason: collision with root package name */
    public float[] f12891w;

    /* renamed from: x, reason: collision with root package name */
    public short f12892x;

    /* renamed from: y, reason: collision with root package name */
    public float f12893y;

    /* renamed from: z, reason: collision with root package name */
    public float f12894z;

    public f() {
        int[] iArr = new int[2];
        for (int i5 = 0; i5 < 2; i5++) {
            iArr[i5] = 0;
        }
        this.f12873c = iArr;
        this.f12880l = true;
        e[] eVarArr = new e[17];
        for (int i6 = 0; i6 < 17; i6++) {
            eVarArr[i6] = null;
        }
        this.f12886r = eVarArr;
        this.f12890v = true;
        this.I = 3;
    }

    public static WritableMap f(e eVar) {
        WritableMap createMap = Arguments.createMap();
        createMap.putInt(StackTraceHelper.ID_KEY, eVar.a);
        createMap.putDouble("x", PixelUtil.toDIPFromPixel(eVar.f12868b));
        createMap.putDouble("y", PixelUtil.toDIPFromPixel(eVar.f12869c));
        createMap.putDouble("absoluteX", PixelUtil.toDIPFromPixel(eVar.f12870d));
        createMap.putDouble("absoluteY", PixelUtil.toDIPFromPixel(eVar.f12871e));
        return createMap;
    }

    public static Activity n(Context context) {
        if (context instanceof ReactContext) {
            return ((ReactContext) context).getCurrentActivity();
        }
        if (context instanceof Activity) {
            return (Activity) context;
        }
        if (context instanceof ContextWrapper) {
            return n(((ContextWrapper) context).getBaseContext());
        }
        return null;
    }

    public void D() {
        this.f12875e = null;
        this.f12887s = false;
        this.A = false;
        this.E = false;
        if (this.f12876f != null && !this.f12880l) {
            UiThreadUtil.runOnUiThread(new c(0, this));
        }
        this.f12880l = true;
        this.f12891w = null;
        this.J = 0;
        this.f12888t = false;
        this.f12889u = false;
        this.f12890v = true;
    }

    public final void F(float f2, float f10, float f11, float f12, float f13, float f14) {
        if (this.f12891w == null) {
            this.f12891w = new float[6];
        }
        float[] fArr = this.f12891w;
        Intrinsics.checkNotNull(fArr);
        fArr[0] = f2;
        float[] fArr2 = this.f12891w;
        Intrinsics.checkNotNull(fArr2);
        fArr2[1] = f10;
        float[] fArr3 = this.f12891w;
        Intrinsics.checkNotNull(fArr3);
        fArr3[2] = f11;
        float[] fArr4 = this.f12891w;
        Intrinsics.checkNotNull(fArr4);
        fArr4[3] = f12;
        float[] fArr5 = this.f12891w;
        Intrinsics.checkNotNull(fArr5);
        fArr5[4] = f13;
        float[] fArr6 = this.f12891w;
        Intrinsics.checkNotNull(fArr6);
        fArr6[5] = f14;
        if (!Float.isNaN(f13) && !Float.isNaN(f2) && !Float.isNaN(f11)) {
            throw new IllegalArgumentException("Cannot have all of left, right and width defined");
        }
        if (!Float.isNaN(f13) && Float.isNaN(f2) && Float.isNaN(f11)) {
            throw new IllegalArgumentException("When width is set one of left or right pads need to be defined");
        }
        if (!Float.isNaN(f14) && !Float.isNaN(f12) && !Float.isNaN(f10)) {
            throw new IllegalArgumentException("Cannot have all of top, bottom and height defined");
        }
        if (!Float.isNaN(f14) && Float.isNaN(f12) && Float.isNaN(f10)) {
            throw new IllegalArgumentException("When height is set one of top or bottom pads need to be defined");
        }
    }

    public boolean G(f otherHandler) {
        Intrinsics.checkNotNullParameter(otherHandler, "handler");
        if (otherHandler == this || this.H == null) {
            return false;
        }
        Intrinsics.checkNotNullParameter(this, "handler");
        Intrinsics.checkNotNullParameter(otherHandler, "otherHandler");
        return otherHandler instanceof q ? !((q) otherHandler).M(this) : otherHandler instanceof km.l;
    }

    public boolean H(ArrayList recorded) {
        Intrinsics.checkNotNullParameter(recorded, "recorded");
        return true;
    }

    public boolean I(f otherHandler) {
        Intrinsics.checkNotNullParameter(otherHandler, "handler");
        if (otherHandler == this) {
            return true;
        }
        km.i iVar = this.H;
        if (iVar != null) {
            Intrinsics.checkNotNullParameter(this, "handler");
            Intrinsics.checkNotNullParameter(otherHandler, "otherHandler");
            int[] iArr = (int[]) iVar.f13437b.get(this.f12874d);
            if (iArr != null) {
                for (int i5 : iArr) {
                    if (i5 == otherHandler.f12874d) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public boolean J(f otherHandler) {
        km.i iVar;
        Intrinsics.checkNotNullParameter(otherHandler, "handler");
        if (otherHandler != this && (iVar = this.H) != null) {
            Intrinsics.checkNotNullParameter(this, "handler");
            Intrinsics.checkNotNullParameter(otherHandler, "otherHandler");
            int[] iArr = (int[]) iVar.f13438c.get(this.f12874d);
            if (iArr != null) {
                for (int i5 : iArr) {
                    if (i5 == otherHandler.f12874d) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public final boolean K(MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        if (sourceEvent.getToolType(0) == 3) {
            if (sourceEvent.getActionMasked() != 0 && sourceEvent.getActionMasked() != 1 && sourceEvent.getActionMasked() != 6 && sourceEvent.getActionMasked() != 5) {
                if (sourceEvent.getActionMasked() != 2) {
                    int actionButton = sourceEvent.getActionButton();
                    int i5 = this.J;
                    if (i5 != 0) {
                    }
                }
                if (sourceEvent.getActionMasked() == 2) {
                    int buttonState = sourceEvent.getButtonState();
                    int i6 = this.J;
                    if (i6 != 0 ? (buttonState & i6) == 0 : buttonState != 1) {
                    }
                }
            }
            return true;
        }
        return false;
    }

    public final void L(int i5) {
        int[] iArr = this.a;
        if (iArr[i5] != -1) {
            return;
        }
        int i6 = 0;
        while (i6 < this.f12872b) {
            int i10 = 0;
            while (i10 < iArr.length && iArr[i10] != i6) {
                i10++;
            }
            if (i10 == iArr.length) {
                break;
            } else {
                i6++;
            }
        }
        iArr[i5] = i6;
        this.f12872b++;
    }

    public void a(boolean z5) {
        if (!this.A || z5) {
            int i5 = this.f12878h;
            if (i5 == 0 || i5 == 2) {
                v(4);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x0123  */
    /* JADX WARN: Removed duplicated region for block: B:101:0x009c A[EDGE_INSN: B:101:0x009c->B:44:0x009c BREAK  A[LOOP:1: B:26:0x0065->B:40:0x0092], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x005b  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x006c  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00bb  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x00fd  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x0116  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x011f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final MotionEvent b(MotionEvent event) {
        int actionIndex;
        int i5;
        MotionEvent.PointerProperties[] pointerPropertiesArr;
        int pointerCount;
        MotionEvent.PointerProperties[] pointerPropertiesArr2;
        MotionEvent.PointerCoords[] pointerCoordsArr;
        MotionEvent.PointerProperties[] pointerPropertiesArr3;
        MotionEvent.PointerProperties[] pointerPropertiesArr4;
        MotionEvent.PointerCoords[] pointerCoordsArr2;
        int i6;
        MotionEvent.PointerCoords[] pointerCoordsArr3;
        int pointerCount2 = event.getPointerCount();
        int i10 = this.f12872b;
        int[] iArr = this.a;
        if (pointerCount2 == i10) {
            int length = iArr.length;
            for (int i11 = 0; i11 < length; i11++) {
                int i12 = iArr[i11];
                if (i12 == -1 || i12 == i11) {
                }
            }
            return event;
        }
        int actionMasked = event.getActionMasked();
        int i13 = 2;
        if (actionMasked != 0) {
            if (actionMasked != 1) {
                if (actionMasked != 5) {
                    if (actionMasked != 6) {
                        i13 = actionMasked;
                        actionIndex = -1;
                        i5 = this.f12872b;
                        if (O == null) {
                            O = new MotionEvent.PointerProperties[17];
                            P = new MotionEvent.PointerCoords[17];
                        }
                        while (true) {
                            pointerPropertiesArr = null;
                            pointerCoordsArr3 = null;
                            if (i5 <= 0) {
                                break;
                            }
                            MotionEvent.PointerProperties[] pointerPropertiesArr5 = O;
                            if (pointerPropertiesArr5 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("pointerProps");
                                pointerPropertiesArr5 = null;
                            }
                            i6 = i5 - 1;
                            if (pointerPropertiesArr5[i6] != null) {
                                break;
                            }
                            MotionEvent.PointerProperties[] pointerPropertiesArr6 = O;
                            if (pointerPropertiesArr6 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("pointerProps");
                                pointerPropertiesArr6 = null;
                            }
                            pointerPropertiesArr6[i6] = new MotionEvent.PointerProperties();
                            MotionEvent.PointerCoords[] pointerCoordsArr4 = P;
                            if (pointerCoordsArr4 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("pointerCoords");
                            } else {
                                pointerCoordsArr3 = pointerCoordsArr4;
                            }
                            pointerCoordsArr3[i6] = new MotionEvent.PointerCoords();
                            i5--;
                        }
                        float rawX = event.getRawX() - event.getX();
                        float rawY = event.getRawY() - event.getY();
                        event.offsetLocation(rawX, rawY);
                        pointerCount = event.getPointerCount();
                        int i14 = i13;
                        int i15 = 0;
                        for (int i16 = 0; i16 < pointerCount; i16++) {
                            int pointerId = event.getPointerId(i16);
                            if (iArr[pointerId] != -1) {
                                MotionEvent.PointerProperties[] pointerPropertiesArr7 = O;
                                if (pointerPropertiesArr7 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("pointerProps");
                                    pointerPropertiesArr7 = null;
                                }
                                event.getPointerProperties(i16, pointerPropertiesArr7[i15]);
                                MotionEvent.PointerProperties[] pointerPropertiesArr8 = O;
                                if (pointerPropertiesArr8 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("pointerProps");
                                    pointerPropertiesArr8 = null;
                                }
                                MotionEvent.PointerProperties pointerProperties = pointerPropertiesArr8[i15];
                                Intrinsics.checkNotNull(pointerProperties);
                                pointerProperties.id = iArr[pointerId];
                                MotionEvent.PointerCoords[] pointerCoordsArr5 = P;
                                if (pointerCoordsArr5 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("pointerCoords");
                                    pointerCoordsArr5 = null;
                                }
                                event.getPointerCoords(i16, pointerCoordsArr5[i15]);
                                if (i16 == actionIndex) {
                                    i14 |= i15 << 8;
                                }
                                i15++;
                            }
                        }
                        pointerPropertiesArr2 = O;
                        if (pointerPropertiesArr2 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("pointerProps");
                            pointerPropertiesArr2 = null;
                        }
                        if (pointerPropertiesArr2.length != 0) {
                            MotionEvent.PointerCoords[] pointerCoordsArr6 = P;
                            if (pointerCoordsArr6 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("pointerCoords");
                                pointerCoordsArr6 = null;
                            }
                            if (pointerCoordsArr6.length != 0) {
                                try {
                                    long downTime = event.getDownTime();
                                    long eventTime = event.getEventTime();
                                    MotionEvent.PointerProperties[] pointerPropertiesArr9 = O;
                                    if (pointerPropertiesArr9 == null) {
                                        Intrinsics.throwUninitializedPropertyAccessException("pointerProps");
                                        pointerPropertiesArr4 = null;
                                    } else {
                                        pointerPropertiesArr4 = pointerPropertiesArr9;
                                    }
                                    MotionEvent.PointerCoords[] pointerCoordsArr7 = P;
                                    if (pointerCoordsArr7 == null) {
                                        Intrinsics.throwUninitializedPropertyAccessException("pointerCoords");
                                        pointerCoordsArr2 = null;
                                    } else {
                                        pointerCoordsArr2 = pointerCoordsArr7;
                                    }
                                    MotionEvent obtain = MotionEvent.obtain(downTime, eventTime, i14, i15, pointerPropertiesArr4, pointerCoordsArr2, event.getMetaState(), event.getButtonState(), event.getXPrecision(), event.getYPrecision(), event.getDeviceId(), event.getEdgeFlags(), event.getSource(), event.getFlags());
                                    Intrinsics.checkNotNullExpressionValue(obtain, "obtain(...)");
                                    float f2 = -rawX;
                                    float f10 = -rawY;
                                    event.offsetLocation(f2, f10);
                                    obtain.offsetLocation(f2, f10);
                                    return obtain;
                                } catch (IllegalArgumentException e9) {
                                    Intrinsics.checkNotNullParameter(this, "handler");
                                    Intrinsics.checkNotNullParameter(event, "event");
                                    Intrinsics.checkNotNullParameter(e9, "e");
                                    String simpleName = Reflection.getOrCreateKotlinClass(getClass()).getSimpleName();
                                    int i17 = this.f12878h;
                                    View view = this.f12876f;
                                    g gVar = this.F;
                                    boolean z5 = this.f12880l;
                                    boolean z6 = this.L;
                                    boolean z7 = this.M;
                                    int i18 = this.f12872b;
                                    String y5 = kotlin.collections.x.y(62, iArr);
                                    StringBuilder s2 = a3.e.s("\n    handler: ", simpleName, "\n    state: ", i17, "\n    view: ");
                                    s2.append(view);
                                    s2.append("\n    orchestrator: ");
                                    s2.append(gVar);
                                    s2.append("\n    isEnabled: ");
                                    com.discord.chat.bridge.botuikit.a.s(s2, z5, "\n    isActive: ", z6, "\n    isAwaiting: ");
                                    s2.append(z7);
                                    s2.append("\n    trackedPointersCount: ");
                                    s2.append(i18);
                                    s2.append("\n    trackedPointers: ");
                                    s2.append(y5);
                                    s2.append("\n    while handling event: ");
                                    s2.append(event);
                                    s2.append("\n      ");
                                    throw new d(kotlin.text.r.b(s2.toString()), e9);
                                }
                            }
                        }
                        pointerCoordsArr = P;
                        if (pointerCoordsArr == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("pointerCoords");
                            pointerCoordsArr = null;
                        }
                        int length2 = pointerCoordsArr.length;
                        pointerPropertiesArr3 = O;
                        if (pointerPropertiesArr3 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("pointerProps");
                        } else {
                            pointerPropertiesArr = pointerPropertiesArr3;
                        }
                        throw new IllegalStateException(a3.e.f(length2, pointerPropertiesArr.length, "pointerCoords.size=", ", pointerProps.size="));
                    }
                }
            }
            actionIndex = event.getActionIndex();
            if (iArr[event.getPointerId(actionIndex)] != -1) {
                i13 = this.f12872b == 1 ? 1 : 6;
            }
            i5 = this.f12872b;
            if (O == null) {
            }
            while (true) {
                pointerPropertiesArr = null;
                pointerCoordsArr3 = null;
                if (i5 <= 0) {
                }
                pointerCoordsArr3[i6] = new MotionEvent.PointerCoords();
                i5--;
            }
            float rawX2 = event.getRawX() - event.getX();
            float rawY2 = event.getRawY() - event.getY();
            event.offsetLocation(rawX2, rawY2);
            pointerCount = event.getPointerCount();
            int i142 = i13;
            int i152 = 0;
            while (i16 < pointerCount) {
            }
            pointerPropertiesArr2 = O;
            if (pointerPropertiesArr2 == null) {
            }
            if (pointerPropertiesArr2.length != 0) {
            }
            pointerCoordsArr = P;
            if (pointerCoordsArr == null) {
            }
            int length22 = pointerCoordsArr.length;
            pointerPropertiesArr3 = O;
            if (pointerPropertiesArr3 == null) {
            }
            throw new IllegalStateException(a3.e.f(length22, pointerPropertiesArr.length, "pointerCoords.size=", ", pointerProps.size="));
        }
        actionIndex = event.getActionIndex();
        if (iArr[event.getPointerId(actionIndex)] != -1) {
            i13 = this.f12872b == 1 ? 0 : 5;
        }
        i5 = this.f12872b;
        if (O == null) {
        }
        while (true) {
            pointerPropertiesArr = null;
            pointerCoordsArr3 = null;
            if (i5 <= 0) {
            }
            pointerCoordsArr3[i6] = new MotionEvent.PointerCoords();
            i5--;
        }
        float rawX22 = event.getRawX() - event.getX();
        float rawY22 = event.getRawY() - event.getY();
        event.offsetLocation(rawX22, rawY22);
        pointerCount = event.getPointerCount();
        int i1422 = i13;
        int i1522 = 0;
        while (i16 < pointerCount) {
        }
        pointerPropertiesArr2 = O;
        if (pointerPropertiesArr2 == null) {
        }
        if (pointerPropertiesArr2.length != 0) {
        }
        pointerCoordsArr = P;
        if (pointerCoordsArr == null) {
        }
        int length222 = pointerCoordsArr.length;
        pointerPropertiesArr3 = O;
        if (pointerPropertiesArr3 == null) {
        }
        throw new IllegalStateException(a3.e.f(length222, pointerPropertiesArr.length, "pointerCoords.size=", ", pointerProps.size="));
    }

    public final void c(e eVar) {
        if (this.f12882n == null) {
            this.f12882n = Arguments.createArray();
        }
        WritableArray writableArray = this.f12882n;
        Intrinsics.checkNotNull(writableArray);
        writableArray.pushMap(f(eVar));
    }

    public final void d() {
        if (this.f12878h == 0) {
            v(2);
        }
    }

    public final void e() {
        int i5 = this.f12878h;
        if (i5 == 4 || i5 == 0 || i5 == 2 || this.M) {
            w();
            v(3);
        }
    }

    public void g(MotionEvent event) {
        d9.a aVar;
        Intrinsics.checkNotNullParameter(event, "event");
        r rVar = this.G;
        if (rVar != null) {
            lm.c cVar = (lm.c) rVar;
            Intrinsics.checkNotNullParameter(this, "handler");
            Intrinsics.checkNotNullParameter(event, "event");
            if (this.f12874d < 0 || this.f12878h != 4) {
                return;
            }
            Intrinsics.checkNotNullParameter(this, "handler");
            int i5 = 0;
            while (true) {
                if (i5 >= 9) {
                    aVar = null;
                    break;
                }
                aVar = km.h.a[i5];
                if (Intrinsics.areEqual(aVar.x(), getClass())) {
                    break;
                } else {
                    i5++;
                }
            }
            if (aVar == null) {
                return;
            }
            int i6 = this.f12881m;
            switch (i6) {
                case 1:
                    Pools$SynchronizedPool pools$SynchronizedPool = lm.b.f14096w;
                    cVar.b(ki.b.L(this, i6, aVar.i(this), lm.a.f14092d));
                    break;
                case 2:
                    Pools$SynchronizedPool pools$SynchronizedPool2 = lm.b.f14096w;
                    lm.b event2 = ki.b.L(this, i6, aVar.i(this), lm.a.f14094i);
                    ReactApplicationContext reactApplicationContext = cVar.a;
                    Intrinsics.checkNotNullParameter(reactApplicationContext, "<this>");
                    Intrinsics.checkNotNullParameter(event2, "event");
                    UIManager uIManager = UIManagerHelper.getUIManager(reactApplicationContext, 2);
                    Intrinsics.checkNotNull(uIManager, "null cannot be cast to non-null type com.facebook.react.fabric.FabricUIManager");
                    ((FabricUIManager) uIManager).getEventDispatcher().dispatchEvent(event2);
                    break;
                case 3:
                    Pools$SynchronizedPool pools$SynchronizedPool3 = lm.b.f14096w;
                    cVar.a("onGestureHandlerEvent", ki.b.h(aVar.i(this)));
                    break;
                case 4:
                    Pools$SynchronizedPool pools$SynchronizedPool4 = lm.b.f14096w;
                    cVar.a("onGestureHandlerEvent", ki.b.h(aVar.i(this)));
                    break;
                case 5:
                case 6:
                    lm.a aVar2 = this.f12888t ? lm.a.f14094i : this.f12889u ? lm.a.f14093e : lm.a.f14092d;
                    Pools$SynchronizedPool pools$SynchronizedPool5 = lm.b.f14096w;
                    lm.b L = ki.b.L(this, i6, aVar.i(this), aVar2);
                    km.f fVar = this.f12877g;
                    if (fVar != null) {
                        fVar.g(L);
                        break;
                    }
                    break;
            }
        }
    }

    public void h(int i5, int i6) {
        d9.a aVar;
        r rVar = this.G;
        if (rVar != null) {
            lm.c cVar = (lm.c) rVar;
            Intrinsics.checkNotNullParameter(this, "handler");
            if (this.f12874d < 0) {
                return;
            }
            Intrinsics.checkNotNullParameter(this, "handler");
            int i10 = 0;
            while (true) {
                if (i10 >= 9) {
                    aVar = null;
                    break;
                }
                aVar = km.h.a[i10];
                if (Intrinsics.areEqual(aVar.x(), getClass())) {
                    break;
                } else {
                    i10++;
                }
            }
            if (aVar == null) {
                return;
            }
            int i11 = this.f12881m;
            switch (i11) {
                case 1:
                    Pools$SynchronizedPool pools$SynchronizedPool = lm.d.E;
                    cVar.b(ks.n.t(this, i5, i6, i11, aVar.i(this), lm.a.f14092d));
                    break;
                case 2:
                case 3:
                    Pools$SynchronizedPool pools$SynchronizedPool2 = lm.d.E;
                    cVar.a("onGestureHandlerStateChange", ks.n.j(aVar.i(this), i5, i6));
                    break;
                case 4:
                    Pools$SynchronizedPool pools$SynchronizedPool3 = lm.d.E;
                    cVar.a("onGestureHandlerStateChange", ks.n.j(aVar.i(this), i5, i6));
                    break;
                case 5:
                case 6:
                    lm.a aVar2 = this.f12889u ? lm.a.f14093e : lm.a.f14092d;
                    Pools$SynchronizedPool pools$SynchronizedPool4 = lm.d.E;
                    lm.d t5 = ks.n.t(this, i5, i6, i11, aVar.i(this), aVar2);
                    km.f fVar = this.f12877g;
                    if (fVar != null) {
                        fVar.g(t5);
                        break;
                    }
                    break;
            }
        }
    }

    public final void i() {
        r rVar;
        if (this.f12882n == null || (rVar = this.G) == null) {
            return;
        }
        lm.c cVar = (lm.c) rVar;
        Intrinsics.checkNotNullParameter(this, "handler");
        if (this.f12874d < 0) {
            return;
        }
        int i5 = this.f12878h;
        if (i5 == 2 || i5 == 4 || i5 == 0 || this.f12876f != null) {
            int i6 = this.f12881m;
            if (i6 == 1) {
                Pools$SynchronizedPool pools$SynchronizedPool = lm.e.f14107w;
                cVar.b(nf.e.v(this, i6, lm.a.f14092d));
                return;
            }
            if (i6 == 4) {
                Pools$SynchronizedPool pools$SynchronizedPool2 = lm.e.f14107w;
                cVar.a("onGestureHandlerEvent", nf.e.f(this));
            } else if (i6 == 5 || i6 == 6) {
                lm.a aVar = this.f12889u ? lm.a.f14093e : lm.a.f14092d;
                Pools$SynchronizedPool pools$SynchronizedPool3 = lm.e.f14107w;
                lm.e v5 = nf.e.v(this, i6, aVar);
                km.f fVar = this.f12877g;
                if (fVar != null) {
                    fVar.g(v5);
                }
            }
        }
    }

    public final void j(MotionEvent motionEvent, MotionEvent motionEvent2) {
        this.f12882n = null;
        this.f12884p = 2;
        float rawX = motionEvent2.getRawX() - motionEvent2.getX();
        float rawY = motionEvent2.getRawY() - motionEvent2.getY();
        int pointerCount = motionEvent.getPointerCount();
        int i5 = 0;
        for (int i6 = 0; i6 < pointerCount; i6++) {
            e eVar = this.f12886r[motionEvent.getPointerId(i6)];
            if (eVar != null && (eVar.f12868b != motionEvent.getX(i6) || eVar.f12869c != motionEvent.getY(i6))) {
                eVar.f12868b = motionEvent.getX(i6);
                eVar.f12869c = motionEvent.getY(i6);
                float x5 = motionEvent2.getX(i6) + rawX;
                int[] iArr = this.f12873c;
                eVar.f12870d = x5 - iArr[0];
                eVar.f12871e = (motionEvent2.getY(i6) + rawY) - iArr[1];
                c(eVar);
                i5++;
            }
        }
        if (i5 > 0) {
            l();
            i();
        }
    }

    public final void k() {
        int i5 = this.f12878h;
        if (i5 == 2 || i5 == 4) {
            v(5);
        }
    }

    public final void l() {
        this.f12883o = null;
        for (e eVar : this.f12886r) {
            if (eVar != null) {
                if (this.f12883o == null) {
                    this.f12883o = Arguments.createArray();
                }
                WritableArray writableArray = this.f12883o;
                Intrinsics.checkNotNull(writableArray);
                writableArray.pushMap(f(eVar));
            }
        }
    }

    public final void m() {
        int i5 = this.f12878h;
        if (i5 == 4 || i5 == 0 || i5 == 2) {
            x();
            v(1);
        }
    }

    public final View o() {
        View view = this.f12876f;
        if (!(view instanceof km.f)) {
            return view;
        }
        km.f fVar = (km.f) view;
        return fVar.getChildCount() == 1 ? fVar.getChildAt(0) : view;
    }

    public final float p() {
        return (this.f12893y + this.B) - this.f12873c[0];
    }

    public final float q() {
        return (this.f12894z + this.C) - this.f12873c[1];
    }

    public final View r() {
        int i5 = this.f12881m;
        if (i5 == 5 || i5 == 6) {
            km.f fVar = this.f12877g;
            Intrinsics.checkNotNull(fVar);
            return fVar;
        }
        View view = this.f12876f;
        Intrinsics.checkNotNull(view);
        return view;
    }

    public final boolean s(f other) {
        Intrinsics.checkNotNullParameter(other, "other");
        int[] iArr = this.a;
        int length = iArr.length;
        for (int i5 = 0; i5 < length; i5++) {
            if (iArr[i5] != -1 && other.a[i5] != -1) {
                return true;
            }
        }
        return false;
    }

    public boolean t() {
        return false;
    }

    public final String toString() {
        String str = this.f12875e;
        if (str == null) {
            View view = this.f12876f;
            str = view != null ? view.getClass().getSimpleName() : null;
        }
        return getClass().getSimpleName() + "@[" + this.f12874d + "]:" + str;
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x013b A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x013c A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0116  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x0137  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean u(float f2, float f10, View view) {
        SvgView svgView;
        boolean z5;
        float f11;
        Intrinsics.checkNotNull(view);
        Intrinsics.checkNotNullParameter(view, "view");
        boolean z6 = view instanceof VirtualView;
        if (z6 || (view instanceof SvgView)) {
            Intrinsics.checkNotNullParameter(view, "view");
            if (z6) {
                svgView = ((VirtualView) view).getSvgView();
                Intrinsics.checkNotNull(svgView);
            } else {
                Intrinsics.checkNotNull(view, "null cannot be cast to non-null type com.horcrux.svg.SvgView");
                svgView = (SvgView) view;
            }
            while (true) {
                ViewParent view2 = svgView.getParent();
                Intrinsics.checkNotNullExpressionValue(view2, "getParent(...)");
                Intrinsics.checkNotNullParameter(view2, "view");
                if (!(view2 instanceof VirtualView) && !(view2 instanceof SvgView)) {
                    break;
                }
                if (svgView.getParent() instanceof VirtualView) {
                    ViewParent parent = svgView.getParent();
                    Intrinsics.checkNotNull(parent, "null cannot be cast to non-null type com.horcrux.svg.VirtualView");
                    svgView = ((VirtualView) parent).getSvgView();
                    Intrinsics.checkNotNull(svgView);
                } else {
                    ViewParent parent2 = svgView.getParent();
                    Intrinsics.checkNotNull(parent2, "null cannot be cast to non-null type com.horcrux.svg.SvgView");
                    svgView = (SvgView) parent2;
                }
            }
            view.getLocationOnScreen(new int[]{0, 0});
            svgView.getLocationOnScreen(new int[]{0, 0});
            int reactTagForTouch = svgView.reactTagForTouch((r0[0] + f2) - r4[0], (r0[1] + f10) - r4[1]);
            boolean z7 = view.getId() == reactTagForTouch;
            double width = view.getWidth();
            double d6 = f2;
            if (0.0d <= d6 && d6 <= width) {
                double height = view.getHeight();
                double d7 = f10;
                if (0.0d <= d7 && d7 <= height) {
                    z5 = true;
                    if (!(view instanceof SvgView)) {
                        return (z7 || kr.s.e(kr.s.n(new v0((ViewGroup) view), new cs.p(27)), Integer.valueOf(reactTagForTouch))) && z5;
                    }
                    if (!z7 || !z5) {
                    }
                }
            }
            z5 = false;
            if (!(view instanceof SvgView)) {
            }
        } else {
            float width2 = view.getWidth();
            float height2 = view.getHeight();
            float[] fArr = this.f12891w;
            if (fArr != null) {
                float f12 = fArr[0];
                float f13 = fArr[1];
                float f14 = fArr[2];
                float f15 = fArr[3];
                float f16 = !Float.isNaN(f12) ? 0.0f - f12 : 0.0f;
                r4 = Float.isNaN(f13) ? 0.0f : 0.0f - f13;
                if (!Float.isNaN(f14)) {
                    width2 += f14;
                }
                if (!Float.isNaN(f15)) {
                    height2 += f15;
                }
                float f17 = fArr[4];
                float f18 = fArr[5];
                if (!Float.isNaN(f17)) {
                    if (Float.isNaN(f12)) {
                        f16 = width2 - f17;
                    } else if (Float.isNaN(f14)) {
                        width2 = f17 + f16;
                    }
                }
                if (!Float.isNaN(f18)) {
                    if (Float.isNaN(f13)) {
                        r4 = height2 - f18;
                    } else if (Float.isNaN(f15)) {
                        height2 = f18 + r4;
                    }
                }
                f11 = r4;
                r4 = f16;
            } else {
                f11 = 0.0f;
            }
            if (r4 > f2 || f2 > width2 || f11 > f10 || f10 > height2) {
            }
        }
    }

    public final void v(int i5) {
        UiThreadUtil.assertOnUiThread();
        if (this.f12878h == i5) {
            return;
        }
        if (this.f12885q > 0 && (i5 == 5 || i5 == 3 || i5 == 1)) {
            this.f12884p = 4;
            this.f12882n = null;
            l();
            e[] eVarArr = this.f12886r;
            for (e eVar : eVarArr) {
                if (eVar != null) {
                    c(eVar);
                }
            }
            this.f12885q = 0;
            kotlin.collections.u.k(eVarArr, null, 0, eVarArr.length);
            i();
        }
        int i6 = this.f12878h;
        this.f12878h = i5;
        if (i5 == 4) {
            short s2 = Q;
            Q = (short) (s2 + 1);
            this.f12892x = s2;
        }
        km.f fVar = this.f12877g;
        if (fVar == null && this.F == null) {
            throw new IllegalStateException("Manually handled gesture had not been assigned to any detector");
        }
        if (this.F == null && fVar != null) {
            fVar.h(this);
        }
        g gVar = this.F;
        Intrinsics.checkNotNull(gVar);
        gVar.getClass();
        Intrinsics.checkNotNullParameter(this, "handler");
        gVar.f12909m++;
        PointF pointF = g.f12895p;
        if (qa.s.v(i5)) {
            for (f fVar2 : CollectionsKt.i0(gVar.f12905g)) {
                if (qa.s.x(fVar2, this) && gVar.k.contains(Integer.valueOf(fVar2.f12874d))) {
                    if (i5 == 5) {
                        fVar2.e();
                        if (fVar2.f12878h == 5) {
                            fVar2.h(3, 2);
                        }
                        fVar2.M = false;
                    } else {
                        gVar.n(fVar2);
                    }
                }
            }
            gVar.a();
        }
        if (i5 == 4) {
            gVar.n(this);
        } else if (i6 == 4 || i6 == 5) {
            if (this.L) {
                h(i5, i6);
            } else if (i5 == 3 || i5 == 1) {
                h(i5, 2);
            }
        } else if (i6 != 0 || i5 != 3) {
            h(i5, i6);
        }
        int i10 = gVar.f12909m - 1;
        gVar.f12909m = i10;
        if (gVar.f12908l || i10 != 0) {
            gVar.f12910n = true;
        } else {
            gVar.b();
        }
        C();
    }

    public abstract void y(MotionEvent motionEvent, MotionEvent motionEvent2);

    public void z(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
    }

    public void A() {
    }

    public void B() {
    }

    public void C() {
    }

    public void E() {
    }

    public void w() {
    }

    public void x() {
    }
}
