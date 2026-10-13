package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.util.SparseIntArray;
import android.view.View;
import android.view.ViewGroup;
import androidx.annotation.NonNull;
import androidx.constraintlayout.core.Metrics;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.events.PointerEventHelper;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import k2.r;
import s0.p;

/* loaded from: classes.dex */
public class ConstraintLayout extends ViewGroup {
    private static final boolean DEBUG = false;
    private static final boolean DEBUG_DRAW_CONSTRAINTS = false;
    public static final int DESIGN_INFO_ID = 0;
    private static final boolean MEASURE = false;
    private static final boolean OPTIMIZE_HEIGHT_CHANGE = false;
    private static final String TAG = "ConstraintLayout";
    private static final boolean USE_CONSTRAINTS_HELPER = true;
    public static final String VERSION = "ConstraintLayout-2.1.0";
    private static SharedValues sSharedValues;
    SparseArray<View> mChildrenByIds;
    private ArrayList<b> mConstraintHelpers;
    protected ConstraintLayoutStates mConstraintLayoutSpec;
    private ConstraintSet mConstraintSet;
    private int mConstraintSetId;
    private ConstraintsChangedListener mConstraintsChangedListener;
    private HashMap<String, Integer> mDesignIds;
    protected boolean mDirtyHierarchy;
    private int mLastMeasureHeight;
    int mLastMeasureHeightMode;
    int mLastMeasureHeightSize;
    private int mLastMeasureWidth;
    int mLastMeasureWidthMode;
    int mLastMeasureWidthSize;
    protected ConstraintWidgetContainer mLayoutWidget;
    private int mMaxHeight;
    private int mMaxWidth;
    Measurer mMeasurer;
    private Metrics mMetrics;
    private int mMinHeight;
    private int mMinWidth;
    private int mOnMeasureHeightMeasureSpec;
    private int mOnMeasureWidthMeasureSpec;
    private int mOptimizationLevel;
    private SparseArray<ConstraintWidget> mTempMapIdToWidget;

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {
        public int A;
        public int B;
        public int C;
        public float D;
        public float E;
        public String F;
        public float G;
        public float H;
        public int I;
        public int J;
        public int K;
        public int L;
        public int M;
        public int N;
        public int O;
        public int P;
        public float Q;
        public float R;
        public int S;
        public int T;
        public int U;
        public boolean V;
        public boolean W;
        public String X;
        public int Y;
        public boolean Z;
        public int a;
        public boolean a0;

        /* renamed from: b, reason: collision with root package name */
        public int f1268b;

        /* renamed from: b0, reason: collision with root package name */
        public boolean f1269b0;

        /* renamed from: c, reason: collision with root package name */
        public float f1270c;

        /* renamed from: c0, reason: collision with root package name */
        public boolean f1271c0;

        /* renamed from: d, reason: collision with root package name */
        public int f1272d;

        /* renamed from: d0, reason: collision with root package name */
        public boolean f1273d0;

        /* renamed from: e, reason: collision with root package name */
        public int f1274e;

        /* renamed from: e0, reason: collision with root package name */
        public int f1275e0;

        /* renamed from: f, reason: collision with root package name */
        public int f1276f;

        /* renamed from: f0, reason: collision with root package name */
        public int f1277f0;

        /* renamed from: g, reason: collision with root package name */
        public int f1278g;

        /* renamed from: g0, reason: collision with root package name */
        public int f1279g0;

        /* renamed from: h, reason: collision with root package name */
        public int f1280h;
        public int h0;

        /* renamed from: i, reason: collision with root package name */
        public int f1281i;

        /* renamed from: i0, reason: collision with root package name */
        public int f1282i0;
        public int j;

        /* renamed from: j0, reason: collision with root package name */
        public int f1283j0;
        public int k;

        /* renamed from: k0, reason: collision with root package name */
        public float f1284k0;

        /* renamed from: l, reason: collision with root package name */
        public int f1285l;

        /* renamed from: l0, reason: collision with root package name */
        public int f1286l0;

        /* renamed from: m, reason: collision with root package name */
        public int f1287m;

        /* renamed from: m0, reason: collision with root package name */
        public int f1288m0;

        /* renamed from: n, reason: collision with root package name */
        public int f1289n;

        /* renamed from: n0, reason: collision with root package name */
        public float f1290n0;

        /* renamed from: o, reason: collision with root package name */
        public int f1291o;

        /* renamed from: o0, reason: collision with root package name */
        public ConstraintWidget f1292o0;

        /* renamed from: p, reason: collision with root package name */
        public int f1293p;

        /* renamed from: q, reason: collision with root package name */
        public float f1294q;

        /* renamed from: r, reason: collision with root package name */
        public int f1295r;

        /* renamed from: s, reason: collision with root package name */
        public int f1296s;

        /* renamed from: t, reason: collision with root package name */
        public int f1297t;

        /* renamed from: u, reason: collision with root package name */
        public int f1298u;

        /* renamed from: v, reason: collision with root package name */
        public int f1299v;

        /* renamed from: w, reason: collision with root package name */
        public int f1300w;

        /* renamed from: x, reason: collision with root package name */
        public int f1301x;

        /* renamed from: y, reason: collision with root package name */
        public int f1302y;

        /* renamed from: z, reason: collision with root package name */
        public int f1303z;

        public LayoutParams(int i5, int i6) {
            super(i5, i6);
            this.a = -1;
            this.f1268b = -1;
            this.f1270c = -1.0f;
            this.f1272d = -1;
            this.f1274e = -1;
            this.f1276f = -1;
            this.f1278g = -1;
            this.f1280h = -1;
            this.f1281i = -1;
            this.j = -1;
            this.k = -1;
            this.f1285l = -1;
            this.f1287m = -1;
            this.f1289n = -1;
            this.f1291o = -1;
            this.f1293p = 0;
            this.f1294q = 0.0f;
            this.f1295r = -1;
            this.f1296s = -1;
            this.f1297t = -1;
            this.f1298u = -1;
            this.f1299v = Integer.MIN_VALUE;
            this.f1300w = Integer.MIN_VALUE;
            this.f1301x = Integer.MIN_VALUE;
            this.f1302y = Integer.MIN_VALUE;
            this.f1303z = Integer.MIN_VALUE;
            this.A = Integer.MIN_VALUE;
            this.B = Integer.MIN_VALUE;
            this.C = 0;
            this.D = 0.5f;
            this.E = 0.5f;
            this.F = null;
            this.G = -1.0f;
            this.H = -1.0f;
            this.I = 0;
            this.J = 0;
            this.K = 0;
            this.L = 0;
            this.M = 0;
            this.N = 0;
            this.O = 0;
            this.P = 0;
            this.Q = 1.0f;
            this.R = 1.0f;
            this.S = -1;
            this.T = -1;
            this.U = -1;
            this.V = false;
            this.W = false;
            this.X = null;
            this.Y = 0;
            this.Z = true;
            this.a0 = true;
            this.f1269b0 = false;
            this.f1271c0 = false;
            this.f1273d0 = false;
            this.f1275e0 = -1;
            this.f1277f0 = -1;
            this.f1279g0 = -1;
            this.h0 = -1;
            this.f1282i0 = Integer.MIN_VALUE;
            this.f1283j0 = Integer.MIN_VALUE;
            this.f1284k0 = 0.5f;
            this.f1292o0 = new ConstraintWidget();
        }

        public final void a() {
            this.f1271c0 = false;
            this.Z = true;
            this.a0 = true;
            int i5 = ((ViewGroup.MarginLayoutParams) this).width;
            if (i5 == -2 && this.V) {
                this.Z = false;
                if (this.K == 0) {
                    this.K = 1;
                }
            }
            int i6 = ((ViewGroup.MarginLayoutParams) this).height;
            if (i6 == -2 && this.W) {
                this.a0 = false;
                if (this.L == 0) {
                    this.L = 1;
                }
            }
            if (i5 == 0 || i5 == -1) {
                this.Z = false;
                if (i5 == 0 && this.K == 1) {
                    ((ViewGroup.MarginLayoutParams) this).width = -2;
                    this.V = true;
                }
            }
            if (i6 == 0 || i6 == -1) {
                this.a0 = false;
                if (i6 == 0 && this.L == 1) {
                    ((ViewGroup.MarginLayoutParams) this).height = -2;
                    this.W = true;
                }
            }
            if (this.f1270c == -1.0f && this.a == -1 && this.f1268b == -1) {
                return;
            }
            this.f1271c0 = true;
            this.Z = true;
            this.a0 = true;
            if (!(this.f1292o0 instanceof r0.f)) {
                this.f1292o0 = new r0.f();
            }
            ((r0.f) this.f1292o0).N(this.U);
        }

        /* JADX WARN: Removed duplicated region for block: B:12:0x004a  */
        /* JADX WARN: Removed duplicated region for block: B:15:0x0051  */
        /* JADX WARN: Removed duplicated region for block: B:18:0x0058  */
        /* JADX WARN: Removed duplicated region for block: B:21:0x005e  */
        /* JADX WARN: Removed duplicated region for block: B:24:0x0064  */
        /* JADX WARN: Removed duplicated region for block: B:31:0x0076  */
        /* JADX WARN: Removed duplicated region for block: B:32:0x007e  */
        @Override // android.view.ViewGroup.MarginLayoutParams, android.view.ViewGroup.LayoutParams
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void resolveLayoutDirection(int i5) {
            int i6;
            int i10;
            int i11;
            int i12;
            int i13 = ((ViewGroup.MarginLayoutParams) this).leftMargin;
            int i14 = ((ViewGroup.MarginLayoutParams) this).rightMargin;
            super.resolveLayoutDirection(i5);
            boolean z5 = false;
            boolean z6 = 1 == getLayoutDirection();
            this.f1279g0 = -1;
            this.h0 = -1;
            this.f1275e0 = -1;
            this.f1277f0 = -1;
            this.f1282i0 = this.f1299v;
            this.f1283j0 = this.f1301x;
            float f2 = this.D;
            this.f1284k0 = f2;
            int i15 = this.a;
            this.f1286l0 = i15;
            int i16 = this.f1268b;
            this.f1288m0 = i16;
            float f10 = this.f1270c;
            this.f1290n0 = f10;
            if (z6) {
                int i17 = this.f1295r;
                if (i17 != -1) {
                    this.f1279g0 = i17;
                } else {
                    int i18 = this.f1296s;
                    if (i18 != -1) {
                        this.h0 = i18;
                    }
                    i6 = this.f1297t;
                    if (i6 != -1) {
                        this.f1277f0 = i6;
                        z5 = true;
                    }
                    i10 = this.f1298u;
                    if (i10 != -1) {
                        this.f1275e0 = i10;
                        z5 = true;
                    }
                    i11 = this.f1303z;
                    if (i11 != Integer.MIN_VALUE) {
                        this.f1283j0 = i11;
                    }
                    i12 = this.A;
                    if (i12 != Integer.MIN_VALUE) {
                        this.f1282i0 = i12;
                    }
                    if (z5) {
                        this.f1284k0 = 1.0f - f2;
                    }
                    if (this.f1271c0 && this.U == 1) {
                        if (f10 == -1.0f) {
                            this.f1290n0 = 1.0f - f10;
                            this.f1286l0 = -1;
                            this.f1288m0 = -1;
                        } else if (i15 != -1) {
                            this.f1288m0 = i15;
                            this.f1286l0 = -1;
                            this.f1290n0 = -1.0f;
                        } else if (i16 != -1) {
                            this.f1286l0 = i16;
                            this.f1288m0 = -1;
                            this.f1290n0 = -1.0f;
                        }
                    }
                }
                z5 = true;
                i6 = this.f1297t;
                if (i6 != -1) {
                }
                i10 = this.f1298u;
                if (i10 != -1) {
                }
                i11 = this.f1303z;
                if (i11 != Integer.MIN_VALUE) {
                }
                i12 = this.A;
                if (i12 != Integer.MIN_VALUE) {
                }
                if (z5) {
                }
                if (this.f1271c0) {
                    if (f10 == -1.0f) {
                    }
                }
            } else {
                int i19 = this.f1295r;
                if (i19 != -1) {
                    this.f1277f0 = i19;
                }
                int i20 = this.f1296s;
                if (i20 != -1) {
                    this.f1275e0 = i20;
                }
                int i21 = this.f1297t;
                if (i21 != -1) {
                    this.f1279g0 = i21;
                }
                int i22 = this.f1298u;
                if (i22 != -1) {
                    this.h0 = i22;
                }
                int i23 = this.f1303z;
                if (i23 != Integer.MIN_VALUE) {
                    this.f1282i0 = i23;
                }
                int i24 = this.A;
                if (i24 != Integer.MIN_VALUE) {
                    this.f1283j0 = i24;
                }
            }
            if (this.f1297t == -1 && this.f1298u == -1 && this.f1296s == -1 && this.f1295r == -1) {
                int i25 = this.f1276f;
                if (i25 != -1) {
                    this.f1279g0 = i25;
                    if (((ViewGroup.MarginLayoutParams) this).rightMargin <= 0 && i14 > 0) {
                        ((ViewGroup.MarginLayoutParams) this).rightMargin = i14;
                    }
                } else {
                    int i26 = this.f1278g;
                    if (i26 != -1) {
                        this.h0 = i26;
                        if (((ViewGroup.MarginLayoutParams) this).rightMargin <= 0 && i14 > 0) {
                            ((ViewGroup.MarginLayoutParams) this).rightMargin = i14;
                        }
                    }
                }
                int i27 = this.f1272d;
                if (i27 != -1) {
                    this.f1275e0 = i27;
                    if (((ViewGroup.MarginLayoutParams) this).leftMargin > 0 || i13 <= 0) {
                        return;
                    }
                    ((ViewGroup.MarginLayoutParams) this).leftMargin = i13;
                    return;
                }
                int i28 = this.f1274e;
                if (i28 != -1) {
                    this.f1277f0 = i28;
                    if (((ViewGroup.MarginLayoutParams) this).leftMargin > 0 || i13 <= 0) {
                        return;
                    }
                    ((ViewGroup.MarginLayoutParams) this).leftMargin = i13;
                }
            }
        }
    }

    public class Measurer implements s0.c {
        public final ConstraintLayout a;

        /* renamed from: b, reason: collision with root package name */
        public int f1304b;

        /* renamed from: c, reason: collision with root package name */
        public int f1305c;

        /* renamed from: d, reason: collision with root package name */
        public int f1306d;

        /* renamed from: e, reason: collision with root package name */
        public int f1307e;

        /* renamed from: f, reason: collision with root package name */
        public int f1308f;

        /* renamed from: g, reason: collision with root package name */
        public int f1309g;

        public Measurer(ConstraintLayout constraintLayout) {
            this.a = constraintLayout;
        }

        public static boolean a(int i5, int i6, int i10) {
            if (i5 == i6) {
                return true;
            }
            int mode = View.MeasureSpec.getMode(i5);
            View.MeasureSpec.getSize(i5);
            int mode2 = View.MeasureSpec.getMode(i6);
            int size = View.MeasureSpec.getSize(i6);
            if (mode2 == 1073741824) {
                return (mode == Integer.MIN_VALUE || mode == 0) && i10 == size;
            }
            return false;
        }

        public final void b(ConstraintWidget constraintWidget, s0.b bVar) {
            int makeMeasureSpec;
            int makeMeasureSpec2;
            int max;
            boolean z5;
            int measuredWidth;
            int baseline;
            int i5;
            if (constraintWidget == null) {
                return;
            }
            r0.c cVar = constraintWidget.J;
            r0.c cVar2 = constraintWidget.H;
            if (constraintWidget.f1230f0 == 8) {
                bVar.f17697e = 0;
                bVar.f17698f = 0;
                bVar.f17699g = 0;
                return;
            }
            if (constraintWidget.S == null) {
                return;
            }
            int i6 = bVar.a;
            int i10 = bVar.f17694b;
            int i11 = bVar.f17695c;
            int i12 = bVar.f17696d;
            int i13 = this.f1304b + this.f1305c;
            int i14 = this.f1306d;
            View view = constraintWidget.f1228e0;
            int b10 = f0.e.b(i6);
            if (b10 == 0) {
                makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(i11, 1073741824);
            } else if (b10 == 1) {
                makeMeasureSpec = ViewGroup.getChildMeasureSpec(this.f1308f, i14, -2);
            } else if (b10 == 2) {
                makeMeasureSpec = ViewGroup.getChildMeasureSpec(this.f1308f, i14, -2);
                boolean z6 = constraintWidget.f1247q == 1;
                int i15 = bVar.j;
                if (i15 == 1 || i15 == 2) {
                    boolean z7 = view.getMeasuredHeight() == constraintWidget.k();
                    if (bVar.j == 2 || !z6 || ((z6 && z7) || constraintWidget.x())) {
                        makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(constraintWidget.n(), 1073741824);
                    }
                }
            } else if (b10 != 3) {
                makeMeasureSpec = 0;
            } else {
                int i16 = this.f1308f;
                int i17 = cVar2 != null ? cVar2.f17082g : 0;
                if (cVar != null) {
                    i17 += cVar.f17082g;
                }
                makeMeasureSpec = ViewGroup.getChildMeasureSpec(i16, i14 + i17, -1);
            }
            int b11 = f0.e.b(i10);
            if (b11 == 0) {
                makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(i12, 1073741824);
            } else if (b11 == 1) {
                makeMeasureSpec2 = ViewGroup.getChildMeasureSpec(this.f1309g, i13, -2);
            } else if (b11 == 2) {
                makeMeasureSpec2 = ViewGroup.getChildMeasureSpec(this.f1309g, i13, -2);
                boolean z8 = constraintWidget.f1248r == 1;
                int i18 = bVar.j;
                if (i18 == 1 || i18 == 2) {
                    boolean z10 = view.getMeasuredWidth() == constraintWidget.n();
                    if (bVar.j == 2 || !z8 || ((z8 && z10) || constraintWidget.y())) {
                        makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(constraintWidget.k(), 1073741824);
                    }
                }
            } else if (b11 != 3) {
                makeMeasureSpec2 = 0;
            } else {
                int i19 = this.f1309g;
                int i20 = cVar2 != null ? constraintWidget.I.f17082g : 0;
                if (cVar != null) {
                    i20 += constraintWidget.K.f17082g;
                }
                makeMeasureSpec2 = ViewGroup.getChildMeasureSpec(i19, i13 + i20, -1);
            }
            ConstraintWidgetContainer constraintWidgetContainer = (ConstraintWidgetContainer) constraintWidget.S;
            ConstraintLayout constraintLayout = ConstraintLayout.this;
            if (constraintWidgetContainer != null && r0.h.c(constraintLayout.mOptimizationLevel, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) && view.getMeasuredWidth() == constraintWidget.n() && view.getMeasuredWidth() < constraintWidgetContainer.n() && view.getMeasuredHeight() == constraintWidget.k() && view.getMeasuredHeight() < constraintWidgetContainer.k() && view.getBaseline() == constraintWidget.Z && !constraintWidget.w() && a(constraintWidget.F, makeMeasureSpec, constraintWidget.n()) && a(constraintWidget.G, makeMeasureSpec2, constraintWidget.k())) {
                bVar.f17697e = constraintWidget.n();
                bVar.f17698f = constraintWidget.k();
                bVar.f17699g = constraintWidget.Z;
                return;
            }
            boolean z11 = i6 == 3;
            boolean z12 = i10 == 3;
            boolean z13 = i10 == 4 || i10 == 1;
            boolean z14 = i6 == 4 || i6 == 1;
            boolean z15 = z11 && constraintWidget.V > 0.0f;
            boolean z16 = z12 && constraintWidget.V > 0.0f;
            if (view == null) {
                return;
            }
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            int i21 = bVar.j;
            if (i21 != 1 && i21 != 2 && z11 && constraintWidget.f1247q == 0 && z12 && constraintWidget.f1248r == 0) {
                z5 = false;
                measuredWidth = 0;
                baseline = 0;
                i5 = -1;
                max = 0;
            } else {
                if ((view instanceof n) && (constraintWidget instanceof r0.e)) {
                    ((n) view).l((r0.e) constraintWidget, makeMeasureSpec, makeMeasureSpec2);
                } else {
                    view.measure(makeMeasureSpec, makeMeasureSpec2);
                }
                constraintWidget.F = makeMeasureSpec;
                constraintWidget.G = makeMeasureSpec2;
                constraintWidget.f1231g = false;
                int measuredWidth2 = view.getMeasuredWidth();
                int measuredHeight = view.getMeasuredHeight();
                int baseline2 = view.getBaseline();
                int i22 = constraintWidget.f1250t;
                int max2 = i22 > 0 ? Math.max(i22, measuredWidth2) : measuredWidth2;
                int i23 = constraintWidget.f1251u;
                if (i23 > 0) {
                    max2 = Math.min(i23, max2);
                }
                int i24 = constraintWidget.f1253w;
                max = i24 > 0 ? Math.max(i24, measuredHeight) : measuredHeight;
                int i25 = makeMeasureSpec2;
                int i26 = constraintWidget.f1254x;
                if (i26 > 0) {
                    max = Math.min(i26, max);
                }
                if (!r0.h.c(constraintLayout.mOptimizationLevel, 1)) {
                    if (z15 && z13) {
                        max2 = (int) ((max * constraintWidget.V) + 0.5f);
                    } else if (z16 && z14) {
                        max = (int) ((max2 / constraintWidget.V) + 0.5f);
                    }
                }
                if (measuredWidth2 == max2 && measuredHeight == max) {
                    baseline = baseline2;
                    measuredWidth = max2;
                    z5 = false;
                } else {
                    if (measuredWidth2 != max2) {
                        makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(max2, 1073741824);
                    }
                    int makeMeasureSpec3 = measuredHeight != max ? View.MeasureSpec.makeMeasureSpec(max, 1073741824) : i25;
                    view.measure(makeMeasureSpec, makeMeasureSpec3);
                    constraintWidget.F = makeMeasureSpec;
                    constraintWidget.G = makeMeasureSpec3;
                    z5 = false;
                    constraintWidget.f1231g = false;
                    measuredWidth = view.getMeasuredWidth();
                    int measuredHeight2 = view.getMeasuredHeight();
                    baseline = view.getBaseline();
                    max = measuredHeight2;
                }
                i5 = -1;
            }
            boolean z17 = baseline != i5 ? true : z5;
            bVar.f17701i = (measuredWidth == bVar.f17695c && max == bVar.f17696d) ? z5 : true;
            boolean z18 = layoutParams.f1269b0 ? true : z17;
            if (z18 && baseline != -1 && constraintWidget.Z != baseline) {
                bVar.f17701i = true;
            }
            bVar.f17697e = measuredWidth;
            bVar.f17698f = max;
            bVar.f17700h = z18;
            bVar.f17699g = baseline;
        }
    }

    public ConstraintLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mChildrenByIds = new SparseArray<>();
        this.mConstraintHelpers = new ArrayList<>(4);
        this.mLayoutWidget = new ConstraintWidgetContainer();
        this.mMinWidth = 0;
        this.mMinHeight = 0;
        this.mMaxWidth = Integer.MAX_VALUE;
        this.mMaxHeight = Integer.MAX_VALUE;
        this.mDirtyHierarchy = true;
        this.mOptimizationLevel = 257;
        this.mConstraintSet = null;
        this.mConstraintLayoutSpec = null;
        this.mConstraintSetId = -1;
        this.mDesignIds = new HashMap<>();
        this.mLastMeasureWidth = -1;
        this.mLastMeasureHeight = -1;
        this.mLastMeasureWidthSize = -1;
        this.mLastMeasureHeightSize = -1;
        this.mLastMeasureWidthMode = 0;
        this.mLastMeasureHeightMode = 0;
        this.mTempMapIdToWidget = new SparseArray<>();
        this.mMeasurer = new Measurer(this);
        this.mOnMeasureWidthMeasureSpec = 0;
        this.mOnMeasureHeightMeasureSpec = 0;
        a(attributeSet, 0);
    }

    private int getPaddingWidth() {
        int max = Math.max(0, getPaddingRight()) + Math.max(0, getPaddingLeft());
        int max2 = Math.max(0, getPaddingEnd()) + Math.max(0, getPaddingStart());
        return max2 > 0 ? max2 : max;
    }

    public static SharedValues getSharedValues() {
        if (sSharedValues == null) {
            SharedValues sharedValues = new SharedValues();
            new SparseIntArray();
            new HashMap();
            sSharedValues = sharedValues;
        }
        return sSharedValues;
    }

    public final void a(AttributeSet attributeSet, int i5) {
        ConstraintWidgetContainer constraintWidgetContainer = this.mLayoutWidget;
        constraintWidgetContainer.f1228e0 = this;
        Measurer measurer = this.mMeasurer;
        constraintWidgetContainer.f1261t0 = measurer;
        constraintWidgetContainer.f1259r0.f17707f = measurer;
        this.mChildrenByIds.put(getId(), this);
        this.mConstraintSet = null;
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = getContext().obtainStyledAttributes(attributeSet, m.f1413b, i5, 0);
            int indexCount = obtainStyledAttributes.getIndexCount();
            for (int i6 = 0; i6 < indexCount; i6++) {
                int index = obtainStyledAttributes.getIndex(i6);
                if (index == 16) {
                    this.mMinWidth = obtainStyledAttributes.getDimensionPixelOffset(index, this.mMinWidth);
                } else if (index == 17) {
                    this.mMinHeight = obtainStyledAttributes.getDimensionPixelOffset(index, this.mMinHeight);
                } else if (index == 14) {
                    this.mMaxWidth = obtainStyledAttributes.getDimensionPixelOffset(index, this.mMaxWidth);
                } else if (index == 15) {
                    this.mMaxHeight = obtainStyledAttributes.getDimensionPixelOffset(index, this.mMaxHeight);
                } else if (index == 112) {
                    this.mOptimizationLevel = obtainStyledAttributes.getInt(index, this.mOptimizationLevel);
                } else if (index == 55) {
                    int resourceId = obtainStyledAttributes.getResourceId(index, 0);
                    if (resourceId != 0) {
                        try {
                            parseLayoutDescription(resourceId);
                        } catch (Resources.NotFoundException unused) {
                            this.mConstraintLayoutSpec = null;
                        }
                    }
                } else if (index == 34) {
                    int resourceId2 = obtainStyledAttributes.getResourceId(index, 0);
                    try {
                        ConstraintSet constraintSet = new ConstraintSet();
                        this.mConstraintSet = constraintSet;
                        constraintSet.g(getContext(), resourceId2);
                    } catch (Resources.NotFoundException unused2) {
                        this.mConstraintSet = null;
                    }
                    this.mConstraintSetId = resourceId2;
                }
            }
            obtainStyledAttributes.recycle();
        }
        ConstraintWidgetContainer constraintWidgetContainer2 = this.mLayoutWidget;
        constraintWidgetContainer2.C0 = this.mOptimizationLevel;
        p0.c.f16272p = constraintWidgetContainer2.R(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
    }

    /* JADX WARN: Removed duplicated region for block: B:138:0x00d3  */
    /* JADX WARN: Removed duplicated region for block: B:145:0x0101  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x0141  */
    /* JADX WARN: Removed duplicated region for block: B:158:0x0173  */
    /* JADX WARN: Removed duplicated region for block: B:162:0x01a4  */
    /* JADX WARN: Removed duplicated region for block: B:165:0x01ac  */
    /* JADX WARN: Removed duplicated region for block: B:166:0x0180  */
    /* JADX WARN: Removed duplicated region for block: B:172:0x0156  */
    /* JADX WARN: Removed duplicated region for block: B:178:0x011e  */
    /* JADX WARN: Removed duplicated region for block: B:183:0x00e7  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:103:0x02bb -> B:76:0x02bc). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void applyConstraintsFromLayoutParams(boolean z5, View view, ConstraintWidget constraintWidget, LayoutParams layoutParams, SparseArray<ConstraintWidget> sparseArray) {
        ConstraintLayout constraintLayout;
        int i5;
        float f2;
        ConstraintWidget constraintWidget2;
        int i6;
        int i10;
        int i11;
        ConstraintWidget constraintWidget3;
        int i12;
        int i13;
        int i14;
        ConstraintWidget constraintWidget4;
        int i15;
        int i16;
        int i17;
        int i18;
        ConstraintWidget constraintWidget5;
        int i19;
        LayoutParams layoutParams2;
        ConstraintWidget constraintWidget6;
        int i20;
        float f10;
        int i21;
        float f11;
        int i22;
        float f12;
        ConstraintWidget constraintWidget7 = constraintWidget;
        layoutParams.a();
        constraintWidget7.f1230f0 = view.getVisibility();
        constraintWidget7.f1228e0 = view;
        if (view instanceof b) {
            constraintLayout = this;
            ((b) view).i(constraintWidget7, constraintLayout.mLayoutWidget.f1262u0);
        } else {
            constraintLayout = this;
        }
        int i23 = -1;
        if (layoutParams.f1271c0) {
            r0.f fVar = (r0.f) constraintWidget7;
            int i24 = layoutParams.f1286l0;
            int i25 = layoutParams.f1288m0;
            float f13 = layoutParams.f1290n0;
            if (f13 != -1.0f) {
                if (f13 > -1.0f) {
                    fVar.f17110p0 = f13;
                    fVar.f17111q0 = -1;
                    fVar.f17112r0 = -1;
                    return;
                }
                return;
            }
            if (i24 != -1) {
                if (i24 > -1) {
                    fVar.f17110p0 = -1.0f;
                    fVar.f17111q0 = i24;
                    fVar.f17112r0 = -1;
                    return;
                }
                return;
            }
            if (i25 == -1 || i25 <= -1) {
                return;
            }
            fVar.f17110p0 = -1.0f;
            fVar.f17111q0 = -1;
            fVar.f17112r0 = i25;
            return;
        }
        int i26 = layoutParams.f1275e0;
        int i27 = layoutParams.f1277f0;
        int i28 = layoutParams.f1279g0;
        int i29 = layoutParams.h0;
        int i30 = layoutParams.f1282i0;
        int i31 = layoutParams.f1283j0;
        float f14 = layoutParams.f1284k0;
        int i32 = layoutParams.f1291o;
        if (i32 != -1) {
            ConstraintWidget constraintWidget8 = sparseArray.get(i32);
            if (constraintWidget8 != null) {
                float f15 = layoutParams.f1294q;
                f12 = 0.0f;
                constraintWidget.s(7, 7, layoutParams.f1293p, 0, constraintWidget8);
                constraintWidget7 = constraintWidget;
                constraintWidget7.C = f15;
            } else {
                f12 = 0.0f;
            }
            f2 = f12;
            i11 = 2;
            constraintWidget6 = constraintWidget7;
            layoutParams2 = layoutParams;
            i12 = 4;
            i20 = 5;
            i18 = 3;
        } else {
            if (i26 != -1) {
                ConstraintWidget constraintWidget9 = sparseArray.get(i26);
                if (constraintWidget9 != null) {
                    f2 = 0.0f;
                    i5 = 2;
                    constraintWidget7.s(2, 2, ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin, i30, constraintWidget9);
                } else {
                    i5 = 2;
                    f2 = 0.0f;
                }
            } else {
                i5 = 2;
                f2 = 0.0f;
                if (i27 != -1 && (constraintWidget2 = sparseArray.get(i27)) != null) {
                    constraintWidget.s(2, 4, ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin, i30, constraintWidget2);
                    i6 = 2;
                    i10 = 4;
                    if (i28 == -1) {
                        ConstraintWidget constraintWidget10 = sparseArray.get(i28);
                        if (constraintWidget10 != null) {
                            constraintWidget.s(i10, i6, ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin, i31, constraintWidget10);
                        }
                        i11 = i6;
                    } else {
                        i11 = i6;
                        if (i29 != -1 && (constraintWidget3 = sparseArray.get(i29)) != null) {
                            constraintWidget.s(i10, i10, ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin, i31, constraintWidget3);
                        }
                    }
                    i12 = i10;
                    i13 = layoutParams.f1280h;
                    if (i13 == -1) {
                        ConstraintWidget constraintWidget11 = sparseArray.get(i13);
                        if (constraintWidget11 != null) {
                            i14 = 3;
                            constraintWidget.s(3, 3, ((ViewGroup.MarginLayoutParams) layoutParams).topMargin, layoutParams.f1300w, constraintWidget11);
                        } else {
                            i14 = 3;
                        }
                    } else {
                        i14 = 3;
                        int i33 = layoutParams.f1281i;
                        if (i33 != -1 && (constraintWidget4 = sparseArray.get(i33)) != null) {
                            constraintWidget.s(3, 5, ((ViewGroup.MarginLayoutParams) layoutParams).topMargin, layoutParams.f1300w, constraintWidget4);
                            i15 = 3;
                            i16 = 5;
                            i17 = layoutParams.j;
                            if (i17 != -1) {
                                ConstraintWidget constraintWidget12 = sparseArray.get(i17);
                                if (constraintWidget12 != null) {
                                    constraintWidget.s(i16, i15, ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin, layoutParams.f1302y, constraintWidget12);
                                }
                                i18 = i15;
                            } else {
                                i18 = i15;
                                int i34 = layoutParams.k;
                                if (i34 != -1 && (constraintWidget5 = sparseArray.get(i34)) != null) {
                                    constraintWidget.s(i16, i16, ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin, layoutParams.f1302y, constraintWidget5);
                                }
                            }
                            int i35 = i16;
                            i19 = layoutParams.f1285l;
                            if (i19 != -1) {
                                layoutParams2 = layoutParams;
                                constraintLayout.b(constraintWidget, layoutParams2, sparseArray, i19, 6);
                            } else {
                                layoutParams2 = layoutParams;
                                int i36 = layoutParams2.f1287m;
                                if (i36 != -1) {
                                    b(constraintWidget, layoutParams2, sparseArray, i36, i18);
                                } else {
                                    int i37 = layoutParams2.f1289n;
                                    if (i37 != -1) {
                                        b(constraintWidget, layoutParams2, sparseArray, i37, i35);
                                        constraintWidget6 = constraintWidget;
                                        i20 = i35;
                                        if (f14 >= f2) {
                                            constraintWidget6.f1224c0 = f14;
                                        }
                                        f10 = layoutParams2.E;
                                        if (f10 >= f2) {
                                            constraintWidget6.f1226d0 = f10;
                                        }
                                    }
                                }
                            }
                            constraintWidget6 = constraintWidget;
                            i20 = i35;
                            if (f14 >= f2) {
                            }
                            f10 = layoutParams2.E;
                            if (f10 >= f2) {
                            }
                        }
                    }
                    i15 = i14;
                    i16 = 5;
                    i17 = layoutParams.j;
                    if (i17 != -1) {
                    }
                    int i352 = i16;
                    i19 = layoutParams.f1285l;
                    if (i19 != -1) {
                    }
                    constraintWidget6 = constraintWidget;
                    i20 = i352;
                    if (f14 >= f2) {
                    }
                    f10 = layoutParams2.E;
                    if (f10 >= f2) {
                    }
                }
            }
            i6 = i5;
            i10 = 4;
            if (i28 == -1) {
            }
            i12 = i10;
            i13 = layoutParams.f1280h;
            if (i13 == -1) {
            }
            i15 = i14;
            i16 = 5;
            i17 = layoutParams.j;
            if (i17 != -1) {
            }
            int i3522 = i16;
            i19 = layoutParams.f1285l;
            if (i19 != -1) {
            }
            constraintWidget6 = constraintWidget;
            i20 = i3522;
            if (f14 >= f2) {
            }
            f10 = layoutParams2.E;
            if (f10 >= f2) {
            }
        }
        if (z5 && ((i22 = layoutParams2.S) != -1 || layoutParams2.T != -1)) {
            int i38 = layoutParams2.T;
            constraintWidget6.X = i22;
            constraintWidget6.Y = i38;
        }
        if (layoutParams2.Z) {
            constraintWidget6.H(1);
            constraintWidget6.J(((ViewGroup.MarginLayoutParams) layoutParams2).width);
            if (((ViewGroup.MarginLayoutParams) layoutParams2).width == -2) {
                constraintWidget6.H(2);
            }
        } else if (((ViewGroup.MarginLayoutParams) layoutParams2).width == -1) {
            if (layoutParams2.V) {
                constraintWidget6.H(3);
            } else {
                constraintWidget6.H(4);
            }
            constraintWidget6.i(i11).f17082g = ((ViewGroup.MarginLayoutParams) layoutParams2).leftMargin;
            constraintWidget6.i(i12).f17082g = ((ViewGroup.MarginLayoutParams) layoutParams2).rightMargin;
        } else {
            constraintWidget6.H(3);
            constraintWidget6.J(0);
        }
        if (layoutParams2.a0) {
            constraintWidget6.I(1);
            constraintWidget6.G(((ViewGroup.MarginLayoutParams) layoutParams2).height);
            if (((ViewGroup.MarginLayoutParams) layoutParams2).height == -2) {
                constraintWidget6.I(2);
            }
        } else if (((ViewGroup.MarginLayoutParams) layoutParams2).height == -1) {
            if (layoutParams2.W) {
                constraintWidget6.I(3);
            } else {
                constraintWidget6.I(4);
            }
            constraintWidget6.i(i18).f17082g = ((ViewGroup.MarginLayoutParams) layoutParams2).topMargin;
            constraintWidget6.i(i20).f17082g = ((ViewGroup.MarginLayoutParams) layoutParams2).bottomMargin;
        } else {
            constraintWidget6.I(3);
            constraintWidget6.G(0);
        }
        String str = layoutParams2.F;
        if (str == null || str.length() == 0) {
            constraintWidget6.V = f2;
        } else {
            int length = str.length();
            int indexOf = str.indexOf(44);
            if (indexOf <= 0 || indexOf >= length - 1) {
                i21 = 0;
            } else {
                String substring = str.substring(0, indexOf);
                if (substring.equalsIgnoreCase("W")) {
                    i23 = 0;
                } else if (substring.equalsIgnoreCase("H")) {
                    i23 = 1;
                }
                i21 = indexOf + 1;
            }
            int indexOf2 = str.indexOf(58);
            if (indexOf2 < 0 || indexOf2 >= length - 1) {
                String substring2 = str.substring(i21);
                if (substring2.length() > 0) {
                    f11 = Float.parseFloat(substring2);
                }
                f11 = f2;
            } else {
                String substring3 = str.substring(i21, indexOf2);
                String substring4 = str.substring(indexOf2 + 1);
                if (substring3.length() > 0 && substring4.length() > 0) {
                    float parseFloat = Float.parseFloat(substring3);
                    float parseFloat2 = Float.parseFloat(substring4);
                    if (parseFloat > f2 && parseFloat2 > f2) {
                        f11 = i23 == 1 ? Math.abs(parseFloat2 / parseFloat) : Math.abs(parseFloat / parseFloat2);
                    }
                }
                f11 = f2;
            }
            if (f11 > f2) {
                constraintWidget6.V = f11;
                constraintWidget6.W = i23;
            }
        }
        float f16 = layoutParams2.G;
        float[] fArr = constraintWidget6.f1236j0;
        fArr[0] = f16;
        fArr[1] = layoutParams2.H;
        constraintWidget6.h0 = layoutParams2.I;
        constraintWidget6.f1235i0 = layoutParams2.J;
        int i39 = layoutParams2.Y;
        if (i39 >= 0 && i39 <= 3) {
            constraintWidget6.f1246p = i39;
        }
        int i40 = layoutParams2.K;
        int i41 = layoutParams2.M;
        int i42 = layoutParams2.O;
        float f17 = layoutParams2.Q;
        constraintWidget6.f1247q = i40;
        constraintWidget6.f1250t = i41;
        if (i42 == Integer.MAX_VALUE) {
            i42 = 0;
        }
        constraintWidget6.f1251u = i42;
        constraintWidget6.f1252v = f17;
        if (f17 > f2 && f17 < 1.0f && i40 == 0) {
            constraintWidget6.f1247q = 2;
        }
        int i43 = layoutParams2.L;
        int i44 = layoutParams2.N;
        int i45 = layoutParams2.P;
        float f18 = layoutParams2.R;
        constraintWidget6.f1248r = i43;
        constraintWidget6.f1253w = i44;
        constraintWidget6.f1254x = i45 != Integer.MAX_VALUE ? i45 : 0;
        constraintWidget6.f1255y = f18;
        if (f18 <= f2 || f18 >= 1.0f || i43 != 0) {
            return;
        }
        constraintWidget6.f1248r = 2;
    }

    public final void b(ConstraintWidget constraintWidget, LayoutParams layoutParams, SparseArray sparseArray, int i5, int i6) {
        View view = this.mChildrenByIds.get(i5);
        ConstraintWidget constraintWidget2 = (ConstraintWidget) sparseArray.get(i5);
        if (constraintWidget2 == null || view == null || !(view.getLayoutParams() instanceof LayoutParams)) {
            return;
        }
        layoutParams.f1269b0 = true;
        if (i6 == 6) {
            LayoutParams layoutParams2 = (LayoutParams) view.getLayoutParams();
            layoutParams2.f1269b0 = true;
            layoutParams2.f1292o0.D = true;
        }
        constraintWidget.i(6).b(constraintWidget2.i(i6), layoutParams.C, layoutParams.B, true);
        constraintWidget.D = true;
        constraintWidget.i(3).j();
        constraintWidget.i(5).j();
    }

    @Override // android.view.ViewGroup
    public boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof LayoutParams;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchDraw(Canvas canvas) {
        Object tag;
        int size;
        ArrayList<b> arrayList = this.mConstraintHelpers;
        if (arrayList != null && (size = arrayList.size()) > 0) {
            for (int i5 = 0; i5 < size; i5++) {
                this.mConstraintHelpers.get(i5).getClass();
            }
        }
        super.dispatchDraw(canvas);
        if (isInEditMode()) {
            float width = getWidth();
            float height = getHeight();
            int childCount = getChildCount();
            for (int i6 = 0; i6 < childCount; i6++) {
                View childAt = getChildAt(i6);
                if (childAt.getVisibility() != 8 && (tag = childAt.getTag()) != null && (tag instanceof String)) {
                    String[] split = ((String) tag).split(",");
                    if (split.length == 4) {
                        int parseInt = Integer.parseInt(split[0]);
                        int parseInt2 = Integer.parseInt(split[1]);
                        int parseInt3 = Integer.parseInt(split[2]);
                        int i10 = (int) ((parseInt / 1080.0f) * width);
                        int i11 = (int) ((parseInt2 / 1920.0f) * height);
                        Paint paint = new Paint();
                        paint.setColor(-65536);
                        float f2 = i10;
                        float f10 = i11;
                        float f11 = i10 + ((int) ((parseInt3 / 1080.0f) * width));
                        canvas.drawLine(f2, f10, f11, f10, paint);
                        float parseInt4 = i11 + ((int) ((Integer.parseInt(split[3]) / 1920.0f) * height));
                        canvas.drawLine(f11, f10, f11, parseInt4, paint);
                        canvas.drawLine(f11, parseInt4, f2, parseInt4, paint);
                        canvas.drawLine(f2, parseInt4, f2, f10, paint);
                        paint.setColor(-16711936);
                        canvas.drawLine(f2, f10, f11, parseInt4, paint);
                        canvas.drawLine(f2, parseInt4, f11, f10, paint);
                    }
                }
            }
        }
    }

    public void fillMetrics(Metrics metrics) {
        this.mMetrics = metrics;
        ConstraintWidgetContainer constraintWidgetContainer = this.mLayoutWidget;
        constraintWidgetContainer.getClass();
        constraintWidgetContainer.f1263v0.getClass();
        p0.c.f16274r = metrics;
    }

    @Override // android.view.View
    public void forceLayout() {
        this.mDirtyHierarchy = true;
        this.mLastMeasureWidth = -1;
        this.mLastMeasureHeight = -1;
        this.mLastMeasureWidthSize = -1;
        this.mLastMeasureHeightSize = -1;
        this.mLastMeasureWidthMode = 0;
        this.mLastMeasureHeightMode = 0;
        super.forceLayout();
    }

    public Object getDesignInformation(int i5, Object obj) {
        if (i5 != 0 || !(obj instanceof String)) {
            return null;
        }
        String str = (String) obj;
        HashMap<String, Integer> hashMap = this.mDesignIds;
        if (hashMap == null || !hashMap.containsKey(str)) {
            return null;
        }
        return this.mDesignIds.get(str);
    }

    public int getMaxHeight() {
        return this.mMaxHeight;
    }

    public int getMaxWidth() {
        return this.mMaxWidth;
    }

    public int getMinHeight() {
        return this.mMinHeight;
    }

    public int getMinWidth() {
        return this.mMinWidth;
    }

    public int getOptimizationLevel() {
        return this.mLayoutWidget.C0;
    }

    public View getViewById(int i5) {
        return this.mChildrenByIds.get(i5);
    }

    public final ConstraintWidget getViewWidget(View view) {
        if (view == this) {
            return this.mLayoutWidget;
        }
        if (view == null) {
            return null;
        }
        if (view.getLayoutParams() instanceof LayoutParams) {
            return ((LayoutParams) view.getLayoutParams()).f1292o0;
        }
        view.setLayoutParams(generateLayoutParams(view.getLayoutParams()));
        if (view.getLayoutParams() instanceof LayoutParams) {
            return ((LayoutParams) view.getLayoutParams()).f1292o0;
        }
        return null;
    }

    public boolean isRtl() {
        return (getContext().getApplicationInfo().flags & 4194304) != 0 && 1 == getLayoutDirection();
    }

    public void loadLayoutDescription(int i5) {
        if (i5 == 0) {
            this.mConstraintLayoutSpec = null;
            return;
        }
        try {
            this.mConstraintLayoutSpec = new ConstraintLayoutStates(getContext(), this, i5);
        } catch (Resources.NotFoundException unused) {
            this.mConstraintLayoutSpec = null;
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int childCount = getChildCount();
        boolean isInEditMode = isInEditMode();
        for (int i12 = 0; i12 < childCount; i12++) {
            View childAt = getChildAt(i12);
            LayoutParams layoutParams = (LayoutParams) childAt.getLayoutParams();
            ConstraintWidget constraintWidget = layoutParams.f1292o0;
            if (childAt.getVisibility() != 8 || layoutParams.f1271c0 || layoutParams.f1273d0 || isInEditMode) {
                int o6 = constraintWidget.o();
                int p3 = constraintWidget.p();
                childAt.layout(o6, p3, constraintWidget.n() + o6, constraintWidget.k() + p3);
            }
        }
        int size = this.mConstraintHelpers.size();
        if (size > 0) {
            for (int i13 = 0; i13 < size; i13++) {
                this.mConstraintHelpers.get(i13).j();
            }
        }
    }

    @Override // android.view.View
    public void onMeasure(int i5, int i6) {
        boolean z5;
        boolean z6;
        boolean z7;
        ConstraintWidget constraintWidget;
        if (this.mOnMeasureWidthMeasureSpec == i5) {
            int i10 = this.mOnMeasureHeightMeasureSpec;
        }
        boolean z8 = true;
        int i11 = 0;
        if (!this.mDirtyHierarchy) {
            int childCount = getChildCount();
            int i12 = 0;
            while (true) {
                if (i12 >= childCount) {
                    break;
                }
                if (getChildAt(i12).isLayoutRequested()) {
                    this.mDirtyHierarchy = true;
                    break;
                }
                i12++;
            }
        }
        this.mOnMeasureWidthMeasureSpec = i5;
        this.mOnMeasureHeightMeasureSpec = i6;
        this.mLayoutWidget.f1262u0 = isRtl();
        if (this.mDirtyHierarchy) {
            this.mDirtyHierarchy = false;
            int childCount2 = getChildCount();
            int i13 = 0;
            while (true) {
                if (i13 >= childCount2) {
                    z5 = false;
                    break;
                } else {
                    if (getChildAt(i13).isLayoutRequested()) {
                        z5 = true;
                        break;
                    }
                    i13++;
                }
            }
            if (z5) {
                boolean isInEditMode = isInEditMode();
                int childCount3 = getChildCount();
                for (int i14 = 0; i14 < childCount3; i14++) {
                    ConstraintWidget viewWidget = getViewWidget(getChildAt(i14));
                    if (viewWidget != null) {
                        viewWidget.z();
                    }
                }
                Object obj = null;
                if (isInEditMode) {
                    for (int i15 = 0; i15 < childCount3; i15++) {
                        View childAt = getChildAt(i15);
                        try {
                            String resourceName = getResources().getResourceName(childAt.getId());
                            setDesignInformation(0, resourceName, Integer.valueOf(childAt.getId()));
                            int indexOf = resourceName.indexOf(47);
                            if (indexOf != -1) {
                                resourceName = resourceName.substring(indexOf + 1);
                            }
                            int id2 = childAt.getId();
                            if (id2 == 0) {
                                constraintWidget = this.mLayoutWidget;
                            } else {
                                View view = this.mChildrenByIds.get(id2);
                                if (view == null && (view = findViewById(id2)) != null && view != this && view.getParent() == this) {
                                    onViewAdded(view);
                                }
                                constraintWidget = view == this ? this.mLayoutWidget : view == null ? null : ((LayoutParams) view.getLayoutParams()).f1292o0;
                            }
                            constraintWidget.f1232g0 = resourceName;
                        } catch (Resources.NotFoundException unused) {
                        }
                    }
                }
                if (this.mConstraintSetId != -1) {
                    for (int i16 = 0; i16 < childCount3; i16++) {
                        getChildAt(i16).getId();
                    }
                }
                ConstraintSet constraintSet = this.mConstraintSet;
                if (constraintSet != null) {
                    constraintSet.b(this);
                }
                this.mLayoutWidget.f1257p0.clear();
                int size = this.mConstraintHelpers.size();
                if (size > 0) {
                    int i17 = 0;
                    while (i17 < size) {
                        b bVar = this.mConstraintHelpers.get(i17);
                        HashMap hashMap = bVar.f1332y;
                        if (bVar.isInEditMode()) {
                            bVar.setIds(bVar.f1330w);
                        }
                        r0.g gVar = bVar.f1329v;
                        if (gVar == null) {
                            z6 = z8;
                        } else {
                            gVar.f17117q0 = i11;
                            Arrays.fill(gVar.f17116p0, obj);
                            int i18 = i11;
                            while (i18 < bVar.f1327e) {
                                int i19 = bVar.f1326d[i18];
                                View viewById = getViewById(i19);
                                if (viewById == null) {
                                    String str = (String) hashMap.get(Integer.valueOf(i19));
                                    z7 = z8;
                                    int g6 = bVar.g(this, str);
                                    if (g6 != 0) {
                                        bVar.f1326d[i18] = g6;
                                        hashMap.put(Integer.valueOf(g6), str);
                                        viewById = getViewById(g6);
                                    }
                                } else {
                                    z7 = z8;
                                }
                                if (viewById != null) {
                                    r0.g gVar2 = bVar.f1329v;
                                    ConstraintWidget viewWidget2 = getViewWidget(viewById);
                                    gVar2.getClass();
                                    if (viewWidget2 != gVar2 && viewWidget2 != null) {
                                        int i20 = gVar2.f17117q0 + 1;
                                        ConstraintWidget[] constraintWidgetArr = gVar2.f17116p0;
                                        if (i20 > constraintWidgetArr.length) {
                                            gVar2.f17116p0 = (ConstraintWidget[]) Arrays.copyOf(constraintWidgetArr, constraintWidgetArr.length * 2);
                                        }
                                        ConstraintWidget[] constraintWidgetArr2 = gVar2.f17116p0;
                                        int i21 = gVar2.f17117q0;
                                        constraintWidgetArr2[i21] = viewWidget2;
                                        gVar2.f17117q0 = i21 + 1;
                                    }
                                }
                                i18++;
                                z8 = z7;
                            }
                            z6 = z8;
                            bVar.f1329v.N();
                        }
                        i17++;
                        z8 = z6;
                        i11 = 0;
                        obj = null;
                    }
                }
                for (int i22 = 0; i22 < childCount3; i22++) {
                    getChildAt(i22);
                }
                this.mTempMapIdToWidget.clear();
                this.mTempMapIdToWidget.put(0, this.mLayoutWidget);
                this.mTempMapIdToWidget.put(getId(), this.mLayoutWidget);
                for (int i23 = 0; i23 < childCount3; i23++) {
                    View childAt2 = getChildAt(i23);
                    this.mTempMapIdToWidget.put(childAt2.getId(), getViewWidget(childAt2));
                }
                for (int i24 = 0; i24 < childCount3; i24++) {
                    View childAt3 = getChildAt(i24);
                    ConstraintWidget viewWidget3 = getViewWidget(childAt3);
                    if (viewWidget3 != null) {
                        LayoutParams layoutParams = (LayoutParams) childAt3.getLayoutParams();
                        ConstraintWidgetContainer constraintWidgetContainer = this.mLayoutWidget;
                        constraintWidgetContainer.f1257p0.add(viewWidget3);
                        ConstraintWidget constraintWidget2 = viewWidget3.S;
                        if (constraintWidget2 != null) {
                            ((ConstraintWidgetContainer) constraintWidget2).f1257p0.remove(viewWidget3);
                            viewWidget3.z();
                        }
                        viewWidget3.S = constraintWidgetContainer;
                        applyConstraintsFromLayoutParams(isInEditMode, childAt3, viewWidget3, layoutParams, this.mTempMapIdToWidget);
                    }
                }
            }
            if (z5) {
                ConstraintWidgetContainer constraintWidgetContainer2 = this.mLayoutWidget;
                constraintWidgetContainer2.f1258q0.P(constraintWidgetContainer2);
            }
        }
        resolveSystem(this.mLayoutWidget, this.mOptimizationLevel, i5, i6);
        int n6 = this.mLayoutWidget.n();
        int k = this.mLayoutWidget.k();
        ConstraintWidgetContainer constraintWidgetContainer3 = this.mLayoutWidget;
        resolveMeasuredDimension(i5, i6, n6, k, constraintWidgetContainer3.D0, constraintWidgetContainer3.E0);
    }

    @Override // android.view.ViewGroup
    public void onViewAdded(View view) {
        super.onViewAdded(view);
        ConstraintWidget viewWidget = getViewWidget(view);
        if ((view instanceof Guideline) && !(viewWidget instanceof r0.f)) {
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            r0.f fVar = new r0.f();
            layoutParams.f1292o0 = fVar;
            layoutParams.f1271c0 = true;
            fVar.N(layoutParams.U);
        }
        if (view instanceof b) {
            b bVar = (b) view;
            bVar.k();
            ((LayoutParams) view.getLayoutParams()).f1273d0 = true;
            if (!this.mConstraintHelpers.contains(bVar)) {
                this.mConstraintHelpers.add(bVar);
            }
        }
        this.mChildrenByIds.put(view.getId(), view);
        this.mDirtyHierarchy = true;
    }

    @Override // android.view.ViewGroup
    public void onViewRemoved(View view) {
        super.onViewRemoved(view);
        this.mChildrenByIds.remove(view.getId());
        ConstraintWidget viewWidget = getViewWidget(view);
        this.mLayoutWidget.f1257p0.remove(viewWidget);
        viewWidget.z();
        this.mConstraintHelpers.remove(view);
        this.mDirtyHierarchy = true;
    }

    public void parseLayoutDescription(int i5) {
        this.mConstraintLayoutSpec = new ConstraintLayoutStates(getContext(), this, i5);
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        this.mDirtyHierarchy = true;
        this.mLastMeasureWidth = -1;
        this.mLastMeasureHeight = -1;
        this.mLastMeasureWidthSize = -1;
        this.mLastMeasureHeightSize = -1;
        this.mLastMeasureWidthMode = 0;
        this.mLastMeasureHeightMode = 0;
        super.requestLayout();
    }

    public void resolveMeasuredDimension(int i5, int i6, int i10, int i11, boolean z5, boolean z6) {
        Measurer measurer = this.mMeasurer;
        int i12 = measurer.f1307e;
        int resolveSizeAndState = View.resolveSizeAndState(i10 + measurer.f1306d, i5, 0);
        int resolveSizeAndState2 = View.resolveSizeAndState(i11 + i12, i6, 0) & 16777215;
        int min = Math.min(this.mMaxWidth, resolveSizeAndState & 16777215);
        int min2 = Math.min(this.mMaxHeight, resolveSizeAndState2);
        if (z5) {
            min |= PointerEventHelper.X_FLAG_SUPPORTS_HOVER;
        }
        if (z6) {
            min2 |= PointerEventHelper.X_FLAG_SUPPORTS_HOVER;
        }
        setMeasuredDimension(min, min2);
        this.mLastMeasureWidth = min;
        this.mLastMeasureHeight = min2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:375:0x0060, code lost:
    
        if (isRtl() != false) goto L10;
     */
    /* JADX WARN: Removed duplicated region for block: B:74:0x02a2  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x02bf  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void resolveSystem(ConstraintWidgetContainer constraintWidgetContainer, int i5, int i6, int i10) {
        boolean z5;
        int i11;
        s0.c cVar;
        boolean z6;
        boolean z7;
        int i12;
        int i13;
        int i14;
        s0.c cVar2;
        boolean z8;
        boolean z10;
        boolean z11;
        s0.c cVar3;
        int i15;
        s0.l lVar;
        s0.n nVar;
        boolean z12;
        int i16;
        int i17;
        ArrayList arrayList;
        int i18;
        int i19;
        int i20;
        int i21;
        int i22;
        boolean z13;
        Iterator it;
        Iterator it2;
        boolean z14;
        Metrics metrics;
        int mode = View.MeasureSpec.getMode(i6);
        int size = View.MeasureSpec.getSize(i6);
        int mode2 = View.MeasureSpec.getMode(i10);
        int size2 = View.MeasureSpec.getSize(i10);
        int max = Math.max(0, getPaddingTop());
        int max2 = Math.max(0, getPaddingBottom());
        int i23 = max + max2;
        int paddingWidth = getPaddingWidth();
        Measurer measurer = this.mMeasurer;
        measurer.f1304b = max;
        measurer.f1305c = max2;
        measurer.f1306d = paddingWidth;
        measurer.f1307e = i23;
        measurer.f1308f = i6;
        measurer.f1309g = i10;
        int max3 = Math.max(0, getPaddingStart());
        int max4 = Math.max(0, getPaddingEnd());
        if (max3 <= 0 && max4 <= 0) {
            max3 = Math.max(0, getPaddingLeft());
        }
        max4 = max3;
        int i24 = size - paddingWidth;
        int i25 = size2 - i23;
        setSelfDimensionBehaviour(constraintWidgetContainer, mode, i24, mode2, i25);
        constraintWidgetContainer.f1264w0 = max4;
        s0.f fVar = constraintWidgetContainer.f1259r0;
        constraintWidgetContainer.f1265x0 = max;
        r rVar = constraintWidgetContainer.f1258q0;
        ConstraintWidgetContainer constraintWidgetContainer2 = (ConstraintWidgetContainer) rVar.f13144v;
        ArrayList arrayList2 = (ArrayList) rVar.f13142e;
        s0.c cVar4 = constraintWidgetContainer.f1261t0;
        int[] iArr = constraintWidgetContainer.B;
        int size3 = constraintWidgetContainer.f1257p0.size();
        int n6 = constraintWidgetContainer.n();
        int k = constraintWidgetContainer.k();
        boolean z15 = false;
        boolean c6 = r0.h.c(i5, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        boolean z16 = c6 || r0.h.c(i5, 64);
        if (z16) {
            int i26 = 0;
            while (i26 < size3) {
                boolean z17 = z16;
                ConstraintWidget constraintWidget = (ConstraintWidget) constraintWidgetContainer.f1257p0.get(i26);
                int i27 = i26;
                int[] iArr2 = constraintWidget.f1245o0;
                i11 = size3;
                boolean z18 = (iArr2[0] == 3) && (iArr2[1] == 3) && constraintWidget.V > 0.0f;
                if ((constraintWidget.u() && z18) || ((constraintWidget.v() && z18) || (constraintWidget instanceof r0.e) || constraintWidget.u() || constraintWidget.v())) {
                    z5 = false;
                    break;
                } else {
                    i26 = i27 + 1;
                    z16 = z17;
                    size3 = i11;
                }
            }
        }
        z5 = z16;
        i11 = size3;
        if (z5 && (metrics = p0.c.f16274r) != null) {
            metrics.a++;
        }
        boolean z19 = z5 & ((mode == 1073741824 && mode2 == 1073741824) || c6);
        if (z19) {
            int min = Math.min(iArr[0], i24);
            int min2 = Math.min(iArr[1], i25);
            if (mode != 1073741824 || constraintWidgetContainer.n() == min) {
                z12 = true;
            } else {
                constraintWidgetContainer.J(min);
                z12 = true;
                fVar.f17703b = true;
            }
            if (mode2 == 1073741824 && constraintWidgetContainer.k() != min2) {
                constraintWidgetContainer.G(min2);
                fVar.f17703b = z12;
            }
            if (mode == 1073741824 && mode2 == 1073741824) {
                ArrayList arrayList3 = fVar.f17706e;
                ConstraintWidgetContainer constraintWidgetContainer3 = fVar.a;
                if (fVar.f17703b || fVar.f17704c) {
                    Iterator it3 = constraintWidgetContainer3.f1257p0.iterator();
                    while (it3.hasNext()) {
                        ConstraintWidget constraintWidget2 = (ConstraintWidget) it3.next();
                        constraintWidget2.h();
                        constraintWidget2.a = z15;
                        constraintWidget2.f1225d.n();
                        constraintWidget2.f1227e.m();
                        arrayList3 = arrayList3;
                        z15 = false;
                    }
                    arrayList = arrayList3;
                    constraintWidgetContainer3.h();
                    i18 = 0;
                    constraintWidgetContainer3.a = false;
                    constraintWidgetContainer3.f1225d.n();
                    constraintWidgetContainer3.f1227e.m();
                    fVar.f17704c = false;
                } else {
                    arrayList = arrayList3;
                    i18 = 0;
                }
                fVar.b(fVar.f17705d);
                constraintWidgetContainer3.X = i18;
                int[] iArr3 = constraintWidgetContainer3.f1245o0;
                constraintWidgetContainer3.Y = i18;
                int j = constraintWidgetContainer3.j(i18);
                int j5 = constraintWidgetContainer3.j(1);
                if (fVar.f17703b) {
                    fVar.c();
                }
                int o6 = constraintWidgetContainer3.o();
                z6 = z19;
                int p3 = constraintWidgetContainer3.p();
                cVar = cVar4;
                constraintWidgetContainer3.f1225d.f17733h.d(o6);
                constraintWidgetContainer3.f1227e.f17733h.d(p3);
                fVar.g();
                if (j == 2 || j5 == 2) {
                    if (c6) {
                        Iterator it4 = arrayList.iterator();
                        while (true) {
                            if (it4.hasNext()) {
                                if (!((p) it4.next()).k()) {
                                    c6 = false;
                                    break;
                                }
                            } else {
                                break;
                            }
                        }
                    }
                    if (c6 && j == 2) {
                        constraintWidgetContainer3.H(1);
                        i19 = o6;
                        constraintWidgetContainer3.J(fVar.d(constraintWidgetContainer3, 0));
                        constraintWidgetContainer3.f1225d.f17730e.d(constraintWidgetContainer3.n());
                    } else {
                        i19 = o6;
                    }
                    if (c6 && j5 == 2) {
                        i20 = 1;
                        constraintWidgetContainer3.I(1);
                        constraintWidgetContainer3.G(fVar.d(constraintWidgetContainer3, 1));
                        constraintWidgetContainer3.f1227e.f17730e.d(constraintWidgetContainer3.k());
                        i21 = iArr3[0];
                        if (i21 != i20 || i21 == 4) {
                            int n10 = constraintWidgetContainer3.n() + i19;
                            constraintWidgetContainer3.f1225d.f17734i.d(n10);
                            constraintWidgetContainer3.f1225d.f17730e.d(n10 - i19);
                            fVar.g();
                            i22 = iArr3[1];
                            if (i22 != 1 || i22 == 4) {
                                int k5 = constraintWidgetContainer3.k() + p3;
                                constraintWidgetContainer3.f1227e.f17734i.d(k5);
                                constraintWidgetContainer3.f1227e.f17730e.d(k5 - p3);
                            }
                            fVar.g();
                            z13 = true;
                        } else {
                            z13 = false;
                        }
                        it = arrayList.iterator();
                        while (it.hasNext()) {
                            p pVar = (p) it.next();
                            if (pVar.f17727b != constraintWidgetContainer3 || pVar.f17732g) {
                                pVar.e();
                            }
                        }
                        it2 = arrayList.iterator();
                        while (it2.hasNext()) {
                            p pVar2 = (p) it2.next();
                            if (z13 || pVar2.f17727b != constraintWidgetContainer3) {
                                if (!pVar2.f17733h.j || ((!pVar2.f17734i.j && !(pVar2 instanceof s0.j)) || (!pVar2.f17730e.j && !(pVar2 instanceof s0.d) && !(pVar2 instanceof s0.j)))) {
                                    z14 = false;
                                    break;
                                }
                            }
                        }
                        z14 = true;
                        constraintWidgetContainer3.H(j);
                        constraintWidgetContainer3.I(j5);
                        z7 = z14;
                        i17 = 1073741824;
                        i12 = 2;
                    }
                } else {
                    i19 = o6;
                }
                i20 = 1;
                i21 = iArr3[0];
                if (i21 != i20) {
                }
                int n102 = constraintWidgetContainer3.n() + i19;
                constraintWidgetContainer3.f1225d.f17734i.d(n102);
                constraintWidgetContainer3.f1225d.f17730e.d(n102 - i19);
                fVar.g();
                i22 = iArr3[1];
                if (i22 != 1) {
                }
                int k52 = constraintWidgetContainer3.k() + p3;
                constraintWidgetContainer3.f1227e.f17734i.d(k52);
                constraintWidgetContainer3.f1227e.f17730e.d(k52 - p3);
                fVar.g();
                z13 = true;
                it = arrayList.iterator();
                while (it.hasNext()) {
                }
                it2 = arrayList.iterator();
                while (it2.hasNext()) {
                }
                z14 = true;
                constraintWidgetContainer3.H(j);
                constraintWidgetContainer3.I(j5);
                z7 = z14;
                i17 = 1073741824;
                i12 = 2;
            } else {
                cVar = cVar4;
                z6 = z19;
                ConstraintWidgetContainer constraintWidgetContainer4 = fVar.a;
                if (fVar.f17703b) {
                    Iterator it5 = constraintWidgetContainer4.f1257p0.iterator();
                    while (it5.hasNext()) {
                        ConstraintWidget constraintWidget3 = (ConstraintWidget) it5.next();
                        constraintWidget3.h();
                        constraintWidget3.a = false;
                        s0.l lVar2 = constraintWidget3.f1225d;
                        lVar2.f17730e.j = false;
                        lVar2.f17732g = false;
                        lVar2.n();
                        s0.n nVar2 = constraintWidget3.f1227e;
                        nVar2.f17730e.j = false;
                        nVar2.f17732g = false;
                        nVar2.m();
                    }
                    i16 = 0;
                    constraintWidgetContainer4.h();
                    constraintWidgetContainer4.a = false;
                    s0.l lVar3 = constraintWidgetContainer4.f1225d;
                    lVar3.f17730e.j = false;
                    lVar3.f17732g = false;
                    lVar3.n();
                    s0.n nVar3 = constraintWidgetContainer4.f1227e;
                    nVar3.f17730e.j = false;
                    nVar3.f17732g = false;
                    nVar3.m();
                    fVar.c();
                } else {
                    i16 = 0;
                }
                fVar.b(fVar.f17705d);
                constraintWidgetContainer4.X = i16;
                constraintWidgetContainer4.Y = i16;
                constraintWidgetContainer4.f1225d.f17733h.d(i16);
                constraintWidgetContainer4.f1227e.f17733h.d(i16);
                i17 = 1073741824;
                if (mode == 1073741824) {
                    z7 = constraintWidgetContainer.O(i16, c6);
                    i12 = 1;
                } else {
                    z7 = true;
                    i12 = 0;
                }
                if (mode2 == 1073741824) {
                    z7 &= constraintWidgetContainer.O(1, c6);
                    i12++;
                }
            }
            if (z7) {
                constraintWidgetContainer.K(mode == i17, mode2 == i17);
            }
        } else {
            cVar = cVar4;
            z6 = z19;
            z7 = false;
            i12 = 0;
        }
        if (z7 && i12 == 2) {
            return;
        }
        int i28 = constraintWidgetContainer.C0;
        if (i11 > 0) {
            int size4 = constraintWidgetContainer.f1257p0.size();
            boolean R = constraintWidgetContainer.R(64);
            s0.c cVar5 = constraintWidgetContainer.f1261t0;
            int i29 = 0;
            while (i29 < size4) {
                ConstraintWidget constraintWidget4 = (ConstraintWidget) constraintWidgetContainer.f1257p0.get(i29);
                if ((constraintWidget4 instanceof r0.f) || (constraintWidget4 instanceof r0.a) || constraintWidget4.E || (R && (lVar = constraintWidget4.f1225d) != null && (nVar = constraintWidget4.f1227e) != null && lVar.f17730e.j && nVar.f17730e.j)) {
                    i15 = size4;
                } else {
                    int j7 = constraintWidget4.j(0);
                    int j10 = constraintWidget4.j(1);
                    i15 = size4;
                    boolean z20 = j7 == 3 && constraintWidget4.f1247q != 1 && j10 == 3 && constraintWidget4.f1248r != 1;
                    if (!z20 && constraintWidgetContainer.R(1) && !(constraintWidget4 instanceof r0.e)) {
                        if (j7 == 3 && constraintWidget4.f1247q == 0 && j10 != 3 && !constraintWidget4.u()) {
                            z20 = true;
                        }
                        if (j10 == 3 && constraintWidget4.f1248r == 0 && j7 != 3 && !constraintWidget4.u()) {
                            z20 = true;
                        }
                        if ((j7 == 3 || j10 == 3) && constraintWidget4.V > 0.0f) {
                            z20 = true;
                        }
                    }
                    if (!z20) {
                        rVar.D(0, constraintWidget4, cVar5);
                    }
                }
                i29++;
                size4 = i15;
            }
            ConstraintLayout constraintLayout = ((Measurer) cVar5).a;
            int childCount = constraintLayout.getChildCount();
            for (int i30 = 0; i30 < childCount; i30++) {
                constraintLayout.getChildAt(i30);
            }
            int size5 = constraintLayout.mConstraintHelpers.size();
            if (size5 > 0) {
                for (int i31 = 0; i31 < size5; i31++) {
                    ((b) constraintLayout.mConstraintHelpers.get(i31)).getClass();
                }
            }
        }
        rVar.P(constraintWidgetContainer);
        int size6 = arrayList2.size();
        if (i11 > 0) {
            rVar.L(constraintWidgetContainer, 0, n6, k);
        }
        if (size6 > 0) {
            int[] iArr4 = constraintWidgetContainer.f1245o0;
            boolean z21 = iArr4[0] == 2;
            boolean z22 = iArr4[1] == 2;
            int max5 = Math.max(constraintWidgetContainer.n(), constraintWidgetContainer2.a0);
            int max6 = Math.max(constraintWidgetContainer.k(), constraintWidgetContainer2.f1222b0);
            int i32 = 0;
            boolean z23 = false;
            while (i32 < size6) {
                ConstraintWidget constraintWidget5 = (ConstraintWidget) arrayList2.get(i32);
                if (constraintWidget5 instanceof r0.e) {
                    int n11 = constraintWidget5.n();
                    int k7 = constraintWidget5.k();
                    z10 = z22;
                    z11 = z21;
                    cVar3 = cVar;
                    boolean D = z23 | rVar.D(1, constraintWidget5, cVar3);
                    int n12 = constraintWidget5.n();
                    boolean z24 = D;
                    int k10 = constraintWidget5.k();
                    if (n12 != n11) {
                        constraintWidget5.J(n12);
                        if (z11 && constraintWidget5.o() + constraintWidget5.T > max5) {
                            max5 = Math.max(max5, constraintWidget5.i(4).e() + constraintWidget5.o() + constraintWidget5.T);
                        }
                        z24 = true;
                    }
                    if (k10 != k7) {
                        constraintWidget5.G(k10);
                        if (z10 && constraintWidget5.p() + constraintWidget5.U > max6) {
                            max6 = Math.max(max6, constraintWidget5.i(5).e() + constraintWidget5.p() + constraintWidget5.U);
                        }
                        z24 = true;
                    }
                    z23 = z24 | ((r0.e) constraintWidget5).f17107x0;
                } else {
                    z10 = z22;
                    z11 = z21;
                    cVar3 = cVar;
                }
                i32++;
                cVar = cVar3;
                z21 = z11;
                z22 = z10;
            }
            boolean z25 = z22;
            boolean z26 = z21;
            int i33 = 0;
            while (true) {
                s0.c cVar6 = cVar;
                if (i33 >= 2) {
                    break;
                }
                int i34 = 0;
                while (i34 < size6) {
                    ConstraintWidget constraintWidget6 = (ConstraintWidget) arrayList2.get(i34);
                    if (((constraintWidget6 instanceof r0.g) && !(constraintWidget6 instanceof r0.e)) || (constraintWidget6 instanceof r0.f) || constraintWidget6.f1230f0 == 8 || ((z6 && constraintWidget6.f1225d.f17730e.j && constraintWidget6.f1227e.f17730e.j) || (constraintWidget6 instanceof r0.e))) {
                        i13 = size6;
                        cVar2 = cVar6;
                        i14 = i34;
                    } else {
                        int n13 = constraintWidget6.n();
                        int k11 = constraintWidget6.k();
                        i13 = size6;
                        int i35 = constraintWidget6.Z;
                        i14 = i34;
                        boolean D2 = rVar.D(i33 == 1 ? 2 : 1, constraintWidget6, cVar6) | z23;
                        int n14 = constraintWidget6.n();
                        cVar2 = cVar6;
                        int k12 = constraintWidget6.k();
                        if (n14 != n13) {
                            constraintWidget6.J(n14);
                            if (z26 && constraintWidget6.o() + constraintWidget6.T > max5) {
                                max5 = Math.max(max5, constraintWidget6.i(4).e() + constraintWidget6.o() + constraintWidget6.T);
                            }
                            D2 = true;
                        }
                        if (k12 != k11) {
                            constraintWidget6.G(k12);
                            if (z25 && constraintWidget6.p() + constraintWidget6.U > max6) {
                                max6 = Math.max(max6, constraintWidget6.i(5).e() + constraintWidget6.p() + constraintWidget6.U);
                            }
                            z8 = true;
                        } else {
                            z8 = D2;
                        }
                        z23 = (!constraintWidget6.D || i35 == constraintWidget6.Z) ? z8 : true;
                    }
                    i34 = i14 + 1;
                    size6 = i13;
                    cVar6 = cVar2;
                }
                int i36 = size6;
                cVar = cVar6;
                if (!z23) {
                    break;
                }
                i33++;
                rVar.L(constraintWidgetContainer, i33, n6, k);
                size6 = i36;
                z23 = false;
            }
        }
        constraintWidgetContainer.C0 = i28;
        p0.c.f16272p = constraintWidgetContainer.R(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
    }

    public void setConstraintSet(ConstraintSet constraintSet) {
        this.mConstraintSet = constraintSet;
    }

    public void setDesignInformation(int i5, Object obj, Object obj2) {
        if (i5 == 0 && (obj instanceof String) && (obj2 instanceof Integer)) {
            if (this.mDesignIds == null) {
                this.mDesignIds = new HashMap<>();
            }
            String str = (String) obj;
            int indexOf = str.indexOf("/");
            if (indexOf != -1) {
                str = str.substring(indexOf + 1);
            }
            this.mDesignIds.put(str, (Integer) obj2);
        }
    }

    @Override // android.view.View
    public void setId(int i5) {
        this.mChildrenByIds.remove(getId());
        super.setId(i5);
        this.mChildrenByIds.put(getId(), this);
    }

    public void setMaxHeight(int i5) {
        if (i5 == this.mMaxHeight) {
            return;
        }
        this.mMaxHeight = i5;
        requestLayout();
    }

    public void setMaxWidth(int i5) {
        if (i5 == this.mMaxWidth) {
            return;
        }
        this.mMaxWidth = i5;
        requestLayout();
    }

    public void setMinHeight(int i5) {
        if (i5 == this.mMinHeight) {
            return;
        }
        this.mMinHeight = i5;
        requestLayout();
    }

    public void setMinWidth(int i5) {
        if (i5 == this.mMinWidth) {
            return;
        }
        this.mMinWidth = i5;
        requestLayout();
    }

    public void setOnConstraintsChanged(ConstraintsChangedListener constraintsChangedListener) {
        this.mConstraintsChangedListener = constraintsChangedListener;
    }

    public void setOptimizationLevel(int i5) {
        this.mOptimizationLevel = i5;
        ConstraintWidgetContainer constraintWidgetContainer = this.mLayoutWidget;
        constraintWidgetContainer.C0 = i5;
        p0.c.f16272p = constraintWidgetContainer.R(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0090  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x009a  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x009d  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0093  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0053  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x003a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setSelfDimensionBehaviour(ConstraintWidgetContainer constraintWidgetContainer, int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        int i14;
        Measurer measurer = this.mMeasurer;
        int i15 = measurer.f1307e;
        int i16 = measurer.f1306d;
        int childCount = getChildCount();
        int i17 = 2;
        if (i5 != Integer.MIN_VALUE) {
            if (i5 != 0) {
                if (i5 == 1073741824) {
                    i6 = Math.min(this.mMaxWidth - i16, i6);
                    i12 = 1;
                    if (i10 != Integer.MIN_VALUE) {
                        if (i10 == 0) {
                            if (childCount == 0) {
                                i11 = Math.max(0, this.mMinHeight);
                            }
                            i11 = 0;
                        } else if (i10 != 1073741824) {
                            i17 = 1;
                            i11 = 0;
                        } else {
                            i11 = Math.min(this.mMaxHeight - i15, i11);
                            i17 = 1;
                        }
                    } else if (childCount == 0) {
                        i11 = Math.max(0, this.mMinHeight);
                    }
                    if (i6 == constraintWidgetContainer.n() || i11 != constraintWidgetContainer.k()) {
                        constraintWidgetContainer.f1259r0.f17704c = true;
                    }
                    constraintWidgetContainer.X = 0;
                    constraintWidgetContainer.Y = 0;
                    int i18 = this.mMaxWidth - i16;
                    int[] iArr = constraintWidgetContainer.B;
                    iArr[0] = i18;
                    iArr[1] = this.mMaxHeight - i15;
                    constraintWidgetContainer.a0 = 0;
                    constraintWidgetContainer.f1222b0 = 0;
                    constraintWidgetContainer.H(i12);
                    constraintWidgetContainer.J(i6);
                    constraintWidgetContainer.I(i17);
                    constraintWidgetContainer.G(i11);
                    i13 = this.mMinWidth - i16;
                    if (i13 < 0) {
                        constraintWidgetContainer.a0 = 0;
                    } else {
                        constraintWidgetContainer.a0 = i13;
                    }
                    i14 = this.mMinHeight - i15;
                    if (i14 < 0) {
                        constraintWidgetContainer.f1222b0 = 0;
                        return;
                    } else {
                        constraintWidgetContainer.f1222b0 = i14;
                        return;
                    }
                }
                i12 = 1;
            } else if (childCount == 0) {
                i6 = Math.max(0, this.mMinWidth);
            } else {
                i12 = 2;
            }
            i6 = 0;
            if (i10 != Integer.MIN_VALUE) {
            }
            if (i6 == constraintWidgetContainer.n()) {
            }
            constraintWidgetContainer.f1259r0.f17704c = true;
            constraintWidgetContainer.X = 0;
            constraintWidgetContainer.Y = 0;
            int i182 = this.mMaxWidth - i16;
            int[] iArr2 = constraintWidgetContainer.B;
            iArr2[0] = i182;
            iArr2[1] = this.mMaxHeight - i15;
            constraintWidgetContainer.a0 = 0;
            constraintWidgetContainer.f1222b0 = 0;
            constraintWidgetContainer.H(i12);
            constraintWidgetContainer.J(i6);
            constraintWidgetContainer.I(i17);
            constraintWidgetContainer.G(i11);
            i13 = this.mMinWidth - i16;
            if (i13 < 0) {
            }
            i14 = this.mMinHeight - i15;
            if (i14 < 0) {
            }
        } else if (childCount == 0) {
            i6 = Math.max(0, this.mMinWidth);
        }
        i12 = 2;
        if (i10 != Integer.MIN_VALUE) {
        }
        if (i6 == constraintWidgetContainer.n()) {
        }
        constraintWidgetContainer.f1259r0.f17704c = true;
        constraintWidgetContainer.X = 0;
        constraintWidgetContainer.Y = 0;
        int i1822 = this.mMaxWidth - i16;
        int[] iArr22 = constraintWidgetContainer.B;
        iArr22[0] = i1822;
        iArr22[1] = this.mMaxHeight - i15;
        constraintWidgetContainer.a0 = 0;
        constraintWidgetContainer.f1222b0 = 0;
        constraintWidgetContainer.H(i12);
        constraintWidgetContainer.J(i6);
        constraintWidgetContainer.I(i17);
        constraintWidgetContainer.G(i11);
        i13 = this.mMinWidth - i16;
        if (i13 < 0) {
        }
        i14 = this.mMinHeight - i15;
        if (i14 < 0) {
        }
    }

    public void setState(int i5, int i6, int i10) {
        ConstraintLayoutStates constraintLayoutStates = this.mConstraintLayoutSpec;
        if (constraintLayoutStates != null) {
            float f2 = i6;
            float f10 = i10;
            ConstraintLayout constraintLayout = constraintLayoutStates.a;
            SparseArray sparseArray = constraintLayoutStates.f1313d;
            int i11 = constraintLayoutStates.f1311b;
            int i12 = 0;
            if (i11 == i5) {
                d dVar = i5 == -1 ? (d) sparseArray.valueAt(0) : (d) sparseArray.get(i11);
                int i13 = constraintLayoutStates.f1312c;
                if (i13 == -1 || !((e) dVar.f1333b.get(i13)).a(f2, f10)) {
                    ArrayList arrayList = dVar.f1333b;
                    while (true) {
                        if (i12 >= arrayList.size()) {
                            i12 = -1;
                            break;
                        } else if (((e) arrayList.get(i12)).a(f2, f10)) {
                            break;
                        } else {
                            i12++;
                        }
                    }
                    ArrayList arrayList2 = dVar.f1333b;
                    if (constraintLayoutStates.f1312c == i12) {
                        return;
                    }
                    ConstraintSet constraintSet = i12 == -1 ? null : ((e) arrayList2.get(i12)).f1340f;
                    if (i12 != -1) {
                        int i14 = ((e) arrayList2.get(i12)).f1339e;
                    }
                    if (constraintSet == null) {
                        return;
                    }
                    constraintLayoutStates.f1312c = i12;
                    constraintSet.a(constraintLayout);
                    return;
                }
                return;
            }
            constraintLayoutStates.f1311b = i5;
            d dVar2 = (d) sparseArray.get(i5);
            ArrayList arrayList3 = dVar2.f1333b;
            while (true) {
                if (i12 >= arrayList3.size()) {
                    i12 = -1;
                    break;
                } else if (((e) arrayList3.get(i12)).a(f2, f10)) {
                    break;
                } else {
                    i12++;
                }
            }
            ArrayList arrayList4 = dVar2.f1333b;
            ConstraintSet constraintSet2 = i12 == -1 ? dVar2.f1335d : ((e) arrayList4.get(i12)).f1340f;
            if (i12 != -1) {
                int i15 = ((e) arrayList4.get(i12)).f1339e;
            }
            if (constraintSet2 != null) {
                constraintLayoutStates.f1312c = i12;
                constraintSet2.a(constraintLayout);
                return;
            }
            Log.v("ConstraintLayoutStates", "NO Constraint set found ! id=" + i5 + ", dim =" + f2 + ", " + f10);
        }
    }

    @Override // android.view.ViewGroup
    public boolean shouldDelayChildPressedState() {
        return false;
    }

    @Override // android.view.ViewGroup
    public LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams(-2, -2);
    }

    @Override // android.view.ViewGroup
    public LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        Context context = getContext();
        LayoutParams layoutParams = new LayoutParams(context, attributeSet);
        layoutParams.a = -1;
        layoutParams.f1268b = -1;
        layoutParams.f1270c = -1.0f;
        layoutParams.f1272d = -1;
        layoutParams.f1274e = -1;
        layoutParams.f1276f = -1;
        layoutParams.f1278g = -1;
        layoutParams.f1280h = -1;
        layoutParams.f1281i = -1;
        layoutParams.j = -1;
        layoutParams.k = -1;
        layoutParams.f1285l = -1;
        layoutParams.f1287m = -1;
        layoutParams.f1289n = -1;
        layoutParams.f1291o = -1;
        layoutParams.f1293p = 0;
        layoutParams.f1294q = 0.0f;
        layoutParams.f1295r = -1;
        layoutParams.f1296s = -1;
        layoutParams.f1297t = -1;
        layoutParams.f1298u = -1;
        layoutParams.f1299v = Integer.MIN_VALUE;
        layoutParams.f1300w = Integer.MIN_VALUE;
        layoutParams.f1301x = Integer.MIN_VALUE;
        layoutParams.f1302y = Integer.MIN_VALUE;
        layoutParams.f1303z = Integer.MIN_VALUE;
        layoutParams.A = Integer.MIN_VALUE;
        layoutParams.B = Integer.MIN_VALUE;
        layoutParams.C = 0;
        layoutParams.D = 0.5f;
        layoutParams.E = 0.5f;
        layoutParams.F = null;
        layoutParams.G = -1.0f;
        layoutParams.H = -1.0f;
        layoutParams.I = 0;
        layoutParams.J = 0;
        layoutParams.K = 0;
        layoutParams.L = 0;
        layoutParams.M = 0;
        layoutParams.N = 0;
        layoutParams.O = 0;
        layoutParams.P = 0;
        layoutParams.Q = 1.0f;
        layoutParams.R = 1.0f;
        layoutParams.S = -1;
        layoutParams.T = -1;
        layoutParams.U = -1;
        layoutParams.V = false;
        layoutParams.W = false;
        layoutParams.X = null;
        layoutParams.Y = 0;
        layoutParams.Z = true;
        layoutParams.a0 = true;
        layoutParams.f1269b0 = false;
        layoutParams.f1271c0 = false;
        layoutParams.f1273d0 = false;
        layoutParams.f1275e0 = -1;
        layoutParams.f1277f0 = -1;
        layoutParams.f1279g0 = -1;
        layoutParams.h0 = -1;
        layoutParams.f1282i0 = Integer.MIN_VALUE;
        layoutParams.f1283j0 = Integer.MIN_VALUE;
        layoutParams.f1284k0 = 0.5f;
        layoutParams.f1292o0 = new ConstraintWidget();
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, m.f1413b);
        int indexCount = obtainStyledAttributes.getIndexCount();
        for (int i5 = 0; i5 < indexCount; i5++) {
            int index = obtainStyledAttributes.getIndex(i5);
            int i6 = c.a.get(index);
            switch (i6) {
                case 1:
                    layoutParams.U = obtainStyledAttributes.getInt(index, layoutParams.U);
                    break;
                case 2:
                    int resourceId = obtainStyledAttributes.getResourceId(index, layoutParams.f1291o);
                    layoutParams.f1291o = resourceId;
                    if (resourceId == -1) {
                        layoutParams.f1291o = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 3:
                    layoutParams.f1293p = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.f1293p);
                    break;
                case 4:
                    float f2 = obtainStyledAttributes.getFloat(index, layoutParams.f1294q) % 360.0f;
                    layoutParams.f1294q = f2;
                    if (f2 < 0.0f) {
                        layoutParams.f1294q = (360.0f - f2) % 360.0f;
                        break;
                    } else {
                        break;
                    }
                case 5:
                    layoutParams.a = obtainStyledAttributes.getDimensionPixelOffset(index, layoutParams.a);
                    break;
                case 6:
                    layoutParams.f1268b = obtainStyledAttributes.getDimensionPixelOffset(index, layoutParams.f1268b);
                    break;
                case 7:
                    layoutParams.f1270c = obtainStyledAttributes.getFloat(index, layoutParams.f1270c);
                    break;
                case 8:
                    int resourceId2 = obtainStyledAttributes.getResourceId(index, layoutParams.f1272d);
                    layoutParams.f1272d = resourceId2;
                    if (resourceId2 == -1) {
                        layoutParams.f1272d = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 9:
                    int resourceId3 = obtainStyledAttributes.getResourceId(index, layoutParams.f1274e);
                    layoutParams.f1274e = resourceId3;
                    if (resourceId3 == -1) {
                        layoutParams.f1274e = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 10:
                    int resourceId4 = obtainStyledAttributes.getResourceId(index, layoutParams.f1276f);
                    layoutParams.f1276f = resourceId4;
                    if (resourceId4 == -1) {
                        layoutParams.f1276f = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 11:
                    int resourceId5 = obtainStyledAttributes.getResourceId(index, layoutParams.f1278g);
                    layoutParams.f1278g = resourceId5;
                    if (resourceId5 == -1) {
                        layoutParams.f1278g = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 12:
                    int resourceId6 = obtainStyledAttributes.getResourceId(index, layoutParams.f1280h);
                    layoutParams.f1280h = resourceId6;
                    if (resourceId6 == -1) {
                        layoutParams.f1280h = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 13:
                    int resourceId7 = obtainStyledAttributes.getResourceId(index, layoutParams.f1281i);
                    layoutParams.f1281i = resourceId7;
                    if (resourceId7 == -1) {
                        layoutParams.f1281i = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 14:
                    int resourceId8 = obtainStyledAttributes.getResourceId(index, layoutParams.j);
                    layoutParams.j = resourceId8;
                    if (resourceId8 == -1) {
                        layoutParams.j = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 15:
                    int resourceId9 = obtainStyledAttributes.getResourceId(index, layoutParams.k);
                    layoutParams.k = resourceId9;
                    if (resourceId9 == -1) {
                        layoutParams.k = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 16:
                    int resourceId10 = obtainStyledAttributes.getResourceId(index, layoutParams.f1285l);
                    layoutParams.f1285l = resourceId10;
                    if (resourceId10 == -1) {
                        layoutParams.f1285l = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 17:
                    int resourceId11 = obtainStyledAttributes.getResourceId(index, layoutParams.f1295r);
                    layoutParams.f1295r = resourceId11;
                    if (resourceId11 == -1) {
                        layoutParams.f1295r = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 18:
                    int resourceId12 = obtainStyledAttributes.getResourceId(index, layoutParams.f1296s);
                    layoutParams.f1296s = resourceId12;
                    if (resourceId12 == -1) {
                        layoutParams.f1296s = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 19:
                    int resourceId13 = obtainStyledAttributes.getResourceId(index, layoutParams.f1297t);
                    layoutParams.f1297t = resourceId13;
                    if (resourceId13 == -1) {
                        layoutParams.f1297t = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 20:
                    int resourceId14 = obtainStyledAttributes.getResourceId(index, layoutParams.f1298u);
                    layoutParams.f1298u = resourceId14;
                    if (resourceId14 == -1) {
                        layoutParams.f1298u = obtainStyledAttributes.getInt(index, -1);
                        break;
                    } else {
                        break;
                    }
                case 21:
                    layoutParams.f1299v = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.f1299v);
                    break;
                case 22:
                    layoutParams.f1300w = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.f1300w);
                    break;
                case 23:
                    layoutParams.f1301x = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.f1301x);
                    break;
                case 24:
                    layoutParams.f1302y = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.f1302y);
                    break;
                case 25:
                    layoutParams.f1303z = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.f1303z);
                    break;
                case 26:
                    layoutParams.A = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.A);
                    break;
                case 27:
                    layoutParams.V = obtainStyledAttributes.getBoolean(index, layoutParams.V);
                    break;
                case 28:
                    layoutParams.W = obtainStyledAttributes.getBoolean(index, layoutParams.W);
                    break;
                case 29:
                    layoutParams.D = obtainStyledAttributes.getFloat(index, layoutParams.D);
                    break;
                case 30:
                    layoutParams.E = obtainStyledAttributes.getFloat(index, layoutParams.E);
                    break;
                case 31:
                    int i10 = obtainStyledAttributes.getInt(index, 0);
                    layoutParams.K = i10;
                    if (i10 == 1) {
                        Log.e(TAG, "layout_constraintWidth_default=\"wrap\" is deprecated.\nUse layout_width=\"WRAP_CONTENT\" and layout_constrainedWidth=\"true\" instead.");
                        break;
                    } else {
                        break;
                    }
                case 32:
                    int i11 = obtainStyledAttributes.getInt(index, 0);
                    layoutParams.L = i11;
                    if (i11 == 1) {
                        Log.e(TAG, "layout_constraintHeight_default=\"wrap\" is deprecated.\nUse layout_height=\"WRAP_CONTENT\" and layout_constrainedHeight=\"true\" instead.");
                        break;
                    } else {
                        break;
                    }
                case 33:
                    try {
                        layoutParams.M = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.M);
                        break;
                    } catch (Exception unused) {
                        if (obtainStyledAttributes.getInt(index, layoutParams.M) == -2) {
                            layoutParams.M = -2;
                            break;
                        } else {
                            break;
                        }
                    }
                case 34:
                    try {
                        layoutParams.O = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.O);
                        break;
                    } catch (Exception unused2) {
                        if (obtainStyledAttributes.getInt(index, layoutParams.O) == -2) {
                            layoutParams.O = -2;
                            break;
                        } else {
                            break;
                        }
                    }
                case 35:
                    layoutParams.Q = Math.max(0.0f, obtainStyledAttributes.getFloat(index, layoutParams.Q));
                    layoutParams.K = 2;
                    break;
                case 36:
                    try {
                        layoutParams.N = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.N);
                        break;
                    } catch (Exception unused3) {
                        if (obtainStyledAttributes.getInt(index, layoutParams.N) == -2) {
                            layoutParams.N = -2;
                            break;
                        } else {
                            break;
                        }
                    }
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    try {
                        layoutParams.P = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.P);
                        break;
                    } catch (Exception unused4) {
                        if (obtainStyledAttributes.getInt(index, layoutParams.P) == -2) {
                            layoutParams.P = -2;
                            break;
                        } else {
                            break;
                        }
                    }
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    layoutParams.R = Math.max(0.0f, obtainStyledAttributes.getFloat(index, layoutParams.R));
                    layoutParams.L = 2;
                    break;
                default:
                    switch (i6) {
                        case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                            ConstraintSet.j(layoutParams, obtainStyledAttributes.getString(index));
                            break;
                        case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                            layoutParams.G = obtainStyledAttributes.getFloat(index, layoutParams.G);
                            break;
                        case 46:
                            layoutParams.H = obtainStyledAttributes.getFloat(index, layoutParams.H);
                            break;
                        case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                            layoutParams.I = obtainStyledAttributes.getInt(index, 0);
                            break;
                        case 48:
                            layoutParams.J = obtainStyledAttributes.getInt(index, 0);
                            break;
                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                            layoutParams.S = obtainStyledAttributes.getDimensionPixelOffset(index, layoutParams.S);
                            break;
                        case 50:
                            layoutParams.T = obtainStyledAttributes.getDimensionPixelOffset(index, layoutParams.T);
                            break;
                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                            layoutParams.X = obtainStyledAttributes.getString(index);
                            break;
                        case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                            int resourceId15 = obtainStyledAttributes.getResourceId(index, layoutParams.f1287m);
                            layoutParams.f1287m = resourceId15;
                            if (resourceId15 == -1) {
                                layoutParams.f1287m = obtainStyledAttributes.getInt(index, -1);
                                break;
                            } else {
                                break;
                            }
                        case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                            int resourceId16 = obtainStyledAttributes.getResourceId(index, layoutParams.f1289n);
                            layoutParams.f1289n = resourceId16;
                            if (resourceId16 == -1) {
                                layoutParams.f1289n = obtainStyledAttributes.getInt(index, -1);
                                break;
                            } else {
                                break;
                            }
                        case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                            layoutParams.C = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.C);
                            break;
                        case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                            layoutParams.B = obtainStyledAttributes.getDimensionPixelSize(index, layoutParams.B);
                            break;
                        default:
                            switch (i6) {
                                case 64:
                                    ConstraintSet.i(layoutParams, obtainStyledAttributes, index, 0);
                                    break;
                                case 65:
                                    ConstraintSet.i(layoutParams, obtainStyledAttributes, index, 1);
                                    break;
                                case 66:
                                    layoutParams.Y = obtainStyledAttributes.getInt(index, layoutParams.Y);
                                    break;
                            }
                    }
            }
        }
        obtainStyledAttributes.recycle();
        layoutParams.a();
        return layoutParams;
    }

    public ConstraintLayout(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        this.mChildrenByIds = new SparseArray<>();
        this.mConstraintHelpers = new ArrayList<>(4);
        this.mLayoutWidget = new ConstraintWidgetContainer();
        this.mMinWidth = 0;
        this.mMinHeight = 0;
        this.mMaxWidth = Integer.MAX_VALUE;
        this.mMaxHeight = Integer.MAX_VALUE;
        this.mDirtyHierarchy = true;
        this.mOptimizationLevel = 257;
        this.mConstraintSet = null;
        this.mConstraintLayoutSpec = null;
        this.mConstraintSetId = -1;
        this.mDesignIds = new HashMap<>();
        this.mLastMeasureWidth = -1;
        this.mLastMeasureHeight = -1;
        this.mLastMeasureWidthSize = -1;
        this.mLastMeasureHeightSize = -1;
        this.mLastMeasureWidthMode = 0;
        this.mLastMeasureHeightMode = 0;
        this.mTempMapIdToWidget = new SparseArray<>();
        this.mMeasurer = new Measurer(this);
        this.mOnMeasureWidthMeasureSpec = 0;
        this.mOnMeasureHeightMeasureSpec = 0;
        a(attributeSet, i5);
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        LayoutParams layoutParams2 = new LayoutParams(layoutParams);
        layoutParams2.a = -1;
        layoutParams2.f1268b = -1;
        layoutParams2.f1270c = -1.0f;
        layoutParams2.f1272d = -1;
        layoutParams2.f1274e = -1;
        layoutParams2.f1276f = -1;
        layoutParams2.f1278g = -1;
        layoutParams2.f1280h = -1;
        layoutParams2.f1281i = -1;
        layoutParams2.j = -1;
        layoutParams2.k = -1;
        layoutParams2.f1285l = -1;
        layoutParams2.f1287m = -1;
        layoutParams2.f1289n = -1;
        layoutParams2.f1291o = -1;
        layoutParams2.f1293p = 0;
        layoutParams2.f1294q = 0.0f;
        layoutParams2.f1295r = -1;
        layoutParams2.f1296s = -1;
        layoutParams2.f1297t = -1;
        layoutParams2.f1298u = -1;
        layoutParams2.f1299v = Integer.MIN_VALUE;
        layoutParams2.f1300w = Integer.MIN_VALUE;
        layoutParams2.f1301x = Integer.MIN_VALUE;
        layoutParams2.f1302y = Integer.MIN_VALUE;
        layoutParams2.f1303z = Integer.MIN_VALUE;
        layoutParams2.A = Integer.MIN_VALUE;
        layoutParams2.B = Integer.MIN_VALUE;
        layoutParams2.C = 0;
        layoutParams2.D = 0.5f;
        layoutParams2.E = 0.5f;
        layoutParams2.F = null;
        layoutParams2.G = -1.0f;
        layoutParams2.H = -1.0f;
        layoutParams2.I = 0;
        layoutParams2.J = 0;
        layoutParams2.K = 0;
        layoutParams2.L = 0;
        layoutParams2.M = 0;
        layoutParams2.N = 0;
        layoutParams2.O = 0;
        layoutParams2.P = 0;
        layoutParams2.Q = 1.0f;
        layoutParams2.R = 1.0f;
        layoutParams2.S = -1;
        layoutParams2.T = -1;
        layoutParams2.U = -1;
        layoutParams2.V = false;
        layoutParams2.W = false;
        layoutParams2.X = null;
        layoutParams2.Y = 0;
        layoutParams2.Z = true;
        layoutParams2.a0 = true;
        layoutParams2.f1269b0 = false;
        layoutParams2.f1271c0 = false;
        layoutParams2.f1273d0 = false;
        layoutParams2.f1275e0 = -1;
        layoutParams2.f1277f0 = -1;
        layoutParams2.f1279g0 = -1;
        layoutParams2.h0 = -1;
        layoutParams2.f1282i0 = Integer.MIN_VALUE;
        layoutParams2.f1283j0 = Integer.MIN_VALUE;
        layoutParams2.f1284k0 = 0.5f;
        layoutParams2.f1292o0 = new ConstraintWidget();
        return layoutParams2;
    }
}
