package n;

import android.content.Context;
import android.graphics.Rect;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.FrameLayout;
import android.widget.HeaderViewListAdapter;
import android.widget.ListAdapter;
import android.widget.PopupWindow;

/* loaded from: classes.dex */
public abstract class r implements z, v, AdapterView.OnItemClickListener {

    /* renamed from: d, reason: collision with root package name */
    public Rect f14700d;

    public static int m(ListAdapter listAdapter, Context context, int i5) {
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(0, 0);
        int count = listAdapter.getCount();
        int i6 = 0;
        int i10 = 0;
        FrameLayout frameLayout = null;
        View view = null;
        for (int i11 = 0; i11 < count; i11++) {
            int itemViewType = listAdapter.getItemViewType(i11);
            if (itemViewType != i10) {
                view = null;
                i10 = itemViewType;
            }
            if (frameLayout == null) {
                frameLayout = new FrameLayout(context);
            }
            view = listAdapter.getView(i11, view, frameLayout);
            view.measure(makeMeasureSpec, makeMeasureSpec2);
            int measuredWidth = view.getMeasuredWidth();
            if (measuredWidth >= i5) {
                return i5;
            }
            if (measuredWidth > i6) {
                i6 = measuredWidth;
            }
        }
        return i6;
    }

    @Override // n.v
    public final boolean g(l lVar) {
        return false;
    }

    @Override // n.v
    public final int getId() {
        return 0;
    }

    @Override // n.v
    public final boolean k(l lVar) {
        return false;
    }

    public abstract void l(j jVar);

    public abstract void n(View view);

    public abstract void o(boolean z5);

    @Override // android.widget.AdapterView.OnItemClickListener
    public final void onItemClick(AdapterView adapterView, View view, int i5, long j) {
        ListAdapter listAdapter = (ListAdapter) adapterView.getAdapter();
        (listAdapter instanceof HeaderViewListAdapter ? (g) ((HeaderViewListAdapter) listAdapter).getWrappedAdapter() : (g) listAdapter).f14640d.q((MenuItem) listAdapter.getItem(i5), this, !(this instanceof d) ? 0 : 4);
    }

    public abstract void p(int i5);

    public abstract void q(int i5);

    public abstract void r(PopupWindow.OnDismissListener onDismissListener);

    public abstract void s(boolean z5);

    public abstract void t(int i5);

    @Override // n.v
    public final void c(Context context, j jVar) {
    }
}
