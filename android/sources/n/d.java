package n;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Rect;
import android.os.Build;
import android.os.Handler;
import android.os.Parcelable;
import android.util.Log;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.FrameLayout;
import android.widget.HeaderViewListAdapter;
import android.widget.ListAdapter;
import android.widget.PopupWindow;
import android.widget.TextView;
import androidx.appcompat.widget.i2;
import androidx.appcompat.widget.j0;
import androidx.appcompat.widget.j2;
import androidx.appcompat.widget.l2;
import androidx.appcompat.widget.t1;
import com.discord.R;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class d extends r implements View.OnKeyListener, PopupWindow.OnDismissListener {
    public View K;
    public View L;
    public int M;
    public boolean N;
    public boolean O;
    public int P;
    public int Q;
    public boolean S;
    public u T;
    public ViewTreeObserver U;
    public PopupWindow.OnDismissListener V;
    public boolean W;

    /* renamed from: e, reason: collision with root package name */
    public final Context f14626e;

    /* renamed from: i, reason: collision with root package name */
    public final int f14627i;

    /* renamed from: v, reason: collision with root package name */
    public final int f14628v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f14629w;

    /* renamed from: x, reason: collision with root package name */
    public final Handler f14630x;

    /* renamed from: y, reason: collision with root package name */
    public final ArrayList f14631y = new ArrayList();
    public final ArrayList E = new ArrayList();
    public final j0 F = new j0(3, this);
    public final el.i G = new el.i(2, this);
    public final u4.c H = new u4.c(this);
    public int I = 0;
    public int J = 0;
    public boolean R = false;

    public d(Context context, View view, int i5, boolean z5) {
        this.f14626e = context;
        this.K = view;
        this.f14628v = i5;
        this.f14629w = z5;
        this.M = view.getLayoutDirection() != 1 ? 1 : 0;
        Resources resources = context.getResources();
        this.f14627i = Math.max(resources.getDisplayMetrics().widthPixels / 2, resources.getDimensionPixelSize(R.dimen.abc_config_prefDialogWidth));
        this.f14630x = new Handler();
    }

    @Override // n.v
    public final void a(boolean z5) {
        Iterator it = this.E.iterator();
        while (it.hasNext()) {
            ListAdapter adapter = ((c) it.next()).a.f993i.getAdapter();
            if (adapter instanceof HeaderViewListAdapter) {
                adapter = ((HeaderViewListAdapter) adapter).getWrappedAdapter();
            }
            ((g) adapter).notifyDataSetChanged();
        }
    }

    @Override // n.v
    public final void b(j jVar, boolean z5) {
        ArrayList arrayList = this.E;
        int size = arrayList.size();
        int i5 = 0;
        while (true) {
            if (i5 >= size) {
                i5 = -1;
                break;
            } else if (jVar == ((c) arrayList.get(i5)).f14624b) {
                break;
            } else {
                i5++;
            }
        }
        if (i5 < 0) {
            return;
        }
        int i6 = i5 + 1;
        if (i6 < arrayList.size()) {
            ((c) arrayList.get(i6)).f14624b.c(false);
        }
        c cVar = (c) arrayList.remove(i5);
        j jVar2 = cVar.f14624b;
        l2 l2Var = cVar.a;
        androidx.appcompat.widget.b0 b0Var = l2Var.W;
        jVar2.r(this);
        if (this.W) {
            i2.b(b0Var, null);
            b0Var.setAnimationStyle(0);
        }
        l2Var.dismiss();
        int size2 = arrayList.size();
        if (size2 > 0) {
            this.M = ((c) arrayList.get(size2 - 1)).f14625c;
        } else {
            this.M = this.K.getLayoutDirection() == 1 ? 0 : 1;
        }
        if (size2 != 0) {
            if (z5) {
                ((c) arrayList.get(0)).f14624b.c(false);
                return;
            }
            return;
        }
        dismiss();
        u uVar = this.T;
        if (uVar != null) {
            uVar.b(jVar, true);
        }
        ViewTreeObserver viewTreeObserver = this.U;
        if (viewTreeObserver != null) {
            if (viewTreeObserver.isAlive()) {
                this.U.removeGlobalOnLayoutListener(this.F);
            }
            this.U = null;
        }
        this.L.removeOnAttachStateChangeListener(this.G);
        this.V.onDismiss();
    }

    @Override // n.v
    public final boolean d(b0 b0Var) {
        Iterator it = this.E.iterator();
        while (it.hasNext()) {
            c cVar = (c) it.next();
            if (b0Var == cVar.f14624b) {
                cVar.a.f993i.requestFocus();
                return true;
            }
        }
        if (!b0Var.hasVisibleItems()) {
            return false;
        }
        l(b0Var);
        u uVar = this.T;
        if (uVar != null) {
            uVar.h(b0Var);
        }
        return true;
    }

    @Override // n.z
    public final void dismiss() {
        ArrayList arrayList = this.E;
        int size = arrayList.size();
        if (size > 0) {
            c[] cVarArr = (c[]) arrayList.toArray(new c[size]);
            for (int i5 = size - 1; i5 >= 0; i5--) {
                c cVar = cVarArr[i5];
                if (cVar.a.W.isShowing()) {
                    cVar.a.dismiss();
                }
            }
        }
    }

    @Override // n.v
    public final boolean e() {
        return false;
    }

    @Override // n.z
    public final t1 h() {
        ArrayList arrayList = this.E;
        if (arrayList.isEmpty()) {
            return null;
        }
        return ((c) k0.d.f(1, arrayList)).a.f993i;
    }

    @Override // n.v
    public final Parcelable i() {
        return null;
    }

    @Override // n.z
    public final boolean isShowing() {
        ArrayList arrayList = this.E;
        return arrayList.size() > 0 && ((c) arrayList.get(0)).a.W.isShowing();
    }

    @Override // n.v
    public final void j(u uVar) {
        this.T = uVar;
    }

    @Override // n.r
    public final void l(j jVar) {
        jVar.b(this, this.f14626e);
        if (isShowing()) {
            u(jVar);
        } else {
            this.f14631y.add(jVar);
        }
    }

    @Override // n.r
    public final void n(View view) {
        if (this.K != view) {
            this.K = view;
            this.J = Gravity.getAbsoluteGravity(this.I, view.getLayoutDirection());
        }
    }

    @Override // n.r
    public final void o(boolean z5) {
        this.R = z5;
    }

    @Override // android.widget.PopupWindow.OnDismissListener
    public final void onDismiss() {
        c cVar;
        ArrayList arrayList = this.E;
        int size = arrayList.size();
        int i5 = 0;
        while (true) {
            if (i5 >= size) {
                cVar = null;
                break;
            }
            cVar = (c) arrayList.get(i5);
            if (!cVar.a.W.isShowing()) {
                break;
            } else {
                i5++;
            }
        }
        if (cVar != null) {
            cVar.f14624b.c(false);
        }
    }

    @Override // android.view.View.OnKeyListener
    public final boolean onKey(View view, int i5, KeyEvent keyEvent) {
        if (keyEvent.getAction() != 1 || i5 != 82) {
            return false;
        }
        dismiss();
        return true;
    }

    @Override // n.r
    public final void p(int i5) {
        if (this.I != i5) {
            this.I = i5;
            this.J = Gravity.getAbsoluteGravity(i5, this.K.getLayoutDirection());
        }
    }

    @Override // n.r
    public final void q(int i5) {
        this.N = true;
        this.P = i5;
    }

    @Override // n.r
    public final void r(PopupWindow.OnDismissListener onDismissListener) {
        this.V = onDismissListener;
    }

    @Override // n.r
    public final void s(boolean z5) {
        this.S = z5;
    }

    @Override // n.z
    public final void show() {
        if (isShowing()) {
            return;
        }
        ArrayList arrayList = this.f14631y;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            u((j) it.next());
        }
        arrayList.clear();
        View view = this.K;
        this.L = view;
        if (view != null) {
            boolean z5 = this.U == null;
            ViewTreeObserver viewTreeObserver = view.getViewTreeObserver();
            this.U = viewTreeObserver;
            if (z5) {
                viewTreeObserver.addOnGlobalLayoutListener(this.F);
            }
            this.L.addOnAttachStateChangeListener(this.G);
        }
    }

    @Override // n.r
    public final void t(int i5) {
        this.O = true;
        this.Q = i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:25:0x015c, code lost:
    
        if (((r9.getWidth() + r11[0]) + r5) > r10.right) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x015e, code lost:
    
        r9 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x0161, code lost:
    
        r9 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0166, code lost:
    
        if ((r11[0] - r5) < 0) goto L69;
     */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x01d0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void u(j jVar) {
        boolean z5;
        int i5;
        c cVar;
        View view;
        int i6;
        int i10;
        int i11;
        int width;
        MenuItem menuItem;
        g gVar;
        int i12;
        int firstVisiblePosition;
        Context context = this.f14626e;
        LayoutInflater from = LayoutInflater.from(context);
        g gVar2 = new g(jVar, from, this.f14629w, R.layout.abc_cascading_menu_item_layout);
        if (!isShowing() && this.R) {
            gVar2.f14642i = true;
        } else if (isShowing()) {
            int size = jVar.f14651f.size();
            int i13 = 0;
            while (true) {
                if (i13 >= size) {
                    z5 = false;
                    break;
                }
                MenuItem item = jVar.getItem(i13);
                if (item.isVisible() && item.getIcon() != null) {
                    z5 = true;
                    break;
                }
                i13++;
            }
            gVar2.f14642i = z5;
        }
        int m5 = r.m(gVar2, context, this.f14627i);
        l2 l2Var = new l2(context, null, this.f14628v, 0);
        l2Var.Z = this.H;
        l2Var.M = this;
        l2Var.W.setOnDismissListener(this);
        l2Var.L = this.K;
        l2Var.I = this.J;
        l2Var.V = true;
        l2Var.W.setFocusable(true);
        l2Var.W.setInputMethodMode(2);
        l2Var.m(gVar2);
        l2Var.o(m5);
        l2Var.I = this.J;
        ArrayList arrayList = this.E;
        if (arrayList.size() > 0) {
            cVar = (c) k0.d.f(1, arrayList);
            j jVar2 = cVar.f14624b;
            int size2 = jVar2.f14651f.size();
            int i14 = 0;
            while (true) {
                if (i14 >= size2) {
                    menuItem = null;
                    break;
                }
                menuItem = jVar2.getItem(i14);
                if (menuItem.hasSubMenu() && jVar == menuItem.getSubMenu()) {
                    break;
                } else {
                    i14++;
                }
            }
            if (menuItem == null) {
                i5 = 1;
                view = null;
            } else {
                t1 t1Var = cVar.a.f993i;
                ListAdapter adapter = t1Var.getAdapter();
                if (adapter instanceof HeaderViewListAdapter) {
                    HeaderViewListAdapter headerViewListAdapter = (HeaderViewListAdapter) adapter;
                    i12 = headerViewListAdapter.getHeadersCount();
                    gVar = (g) headerViewListAdapter.getWrappedAdapter();
                } else {
                    gVar = (g) adapter;
                    i12 = 0;
                }
                int count = gVar.getCount();
                i5 = 1;
                int i15 = 0;
                while (true) {
                    if (i15 >= count) {
                        i15 = -1;
                        break;
                    } else if (menuItem == gVar.getItem(i15)) {
                        break;
                    } else {
                        i15++;
                    }
                }
                if (i15 != -1 && (firstVisiblePosition = (i15 + i12) - t1Var.getFirstVisiblePosition()) >= 0 && firstVisiblePosition < t1Var.getChildCount()) {
                    view = t1Var.getChildAt(firstVisiblePosition);
                }
            }
            if (view == null) {
                int i16 = Build.VERSION.SDK_INT;
                androidx.appcompat.widget.b0 b0Var = l2Var.W;
                if (i16 <= 28) {
                    Method method = l2.a0;
                    if (method != null) {
                        try {
                            method.invoke(b0Var, Boolean.FALSE);
                        } catch (Exception unused) {
                            Log.i("MenuPopupWindow", "Could not invoke setTouchModal() on PopupWindow. Oh well.");
                        }
                    }
                } else {
                    j2.a(b0Var, false);
                }
                i2.a(l2Var.W, null);
                t1 t1Var2 = ((c) arrayList.get(arrayList.size() - 1)).a.f993i;
                int[] iArr = new int[2];
                t1Var2.getLocationOnScreen(iArr);
                Rect rect = new Rect();
                this.L.getWindowVisibleDisplayFrame(rect);
                if (this.M == i5) {
                }
                boolean z6 = i6 == 1;
                this.M = i6;
                if (Build.VERSION.SDK_INT >= 26) {
                    l2Var.L = view;
                    i11 = 0;
                    i10 = 0;
                } else {
                    int[] iArr2 = new int[2];
                    this.K.getLocationOnScreen(iArr2);
                    int[] iArr3 = new int[2];
                    view.getLocationOnScreen(iArr3);
                    if ((this.J & 7) == 5) {
                        iArr2[0] = this.K.getWidth() + iArr2[0];
                        iArr3[0] = view.getWidth() + iArr3[0];
                    }
                    i10 = iArr3[0] - iArr2[0];
                    i11 = iArr3[1] - iArr2[1];
                }
                if ((this.J & 5) != 5) {
                    if (z6) {
                        width = i10 + view.getWidth();
                        l2Var.f996x = width;
                        l2Var.H = true;
                        l2Var.G = true;
                        l2Var.i(i11);
                    }
                    width = i10 - m5;
                    l2Var.f996x = width;
                    l2Var.H = true;
                    l2Var.G = true;
                    l2Var.i(i11);
                } else if (z6) {
                    width = i10 + m5;
                    l2Var.f996x = width;
                    l2Var.H = true;
                    l2Var.G = true;
                    l2Var.i(i11);
                } else {
                    m5 = view.getWidth();
                    width = i10 - m5;
                    l2Var.f996x = width;
                    l2Var.H = true;
                    l2Var.G = true;
                    l2Var.i(i11);
                }
            } else {
                if (this.N) {
                    l2Var.f996x = this.P;
                }
                if (this.O) {
                    l2Var.i(this.Q);
                }
                Rect rect2 = this.f14700d;
                l2Var.U = rect2 != null ? new Rect(rect2) : null;
            }
            arrayList.add(new c(l2Var, jVar, this.M));
            l2Var.show();
            t1 t1Var3 = l2Var.f993i;
            t1Var3.setOnKeyListener(this);
            if (cVar == null || !this.S || jVar.f14656m == null) {
                return;
            }
            FrameLayout frameLayout = (FrameLayout) from.inflate(R.layout.abc_popup_menu_header_item_layout, (ViewGroup) t1Var3, false);
            TextView textView = (TextView) frameLayout.findViewById(android.R.id.title);
            frameLayout.setEnabled(false);
            textView.setText(jVar.f14656m);
            t1Var3.addHeaderView(frameLayout, null, false);
            l2Var.show();
            return;
        }
        i5 = 1;
        cVar = null;
        view = null;
        if (view == null) {
        }
        arrayList.add(new c(l2Var, jVar, this.M));
        l2Var.show();
        t1 t1Var32 = l2Var.f993i;
        t1Var32.setOnKeyListener(this);
        if (cVar == null) {
        }
    }

    @Override // n.v
    public final void f(Parcelable parcelable) {
    }
}
