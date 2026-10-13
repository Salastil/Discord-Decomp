package androidx.appcompat.widget;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.widget.HeaderViewListAdapter;
import android.widget.ListAdapter;
import androidx.appcompat.view.menu.ListMenuItemView;

/* loaded from: classes.dex */
public final class k2 extends t1 {
    public final int J;
    public final int K;
    public h2 L;
    public n.l M;

    public k2(Context context, boolean z5) {
        super(context, z5);
        if (1 == context.getResources().getConfiguration().getLayoutDirection()) {
            this.J = 21;
            this.K = 22;
        } else {
            this.J = 22;
            this.K = 21;
        }
    }

    @Override // androidx.appcompat.widget.t1, android.view.View
    public final boolean onHoverEvent(MotionEvent motionEvent) {
        n.g gVar;
        int i5;
        int pointToPosition;
        int i6;
        if (this.L != null) {
            ListAdapter adapter = getAdapter();
            if (adapter instanceof HeaderViewListAdapter) {
                HeaderViewListAdapter headerViewListAdapter = (HeaderViewListAdapter) adapter;
                i5 = headerViewListAdapter.getHeadersCount();
                gVar = (n.g) headerViewListAdapter.getWrappedAdapter();
            } else {
                gVar = (n.g) adapter;
                i5 = 0;
            }
            n.l item = (motionEvent.getAction() == 10 || (pointToPosition = pointToPosition((int) motionEvent.getX(), (int) motionEvent.getY())) == -1 || (i6 = pointToPosition - i5) < 0 || i6 >= gVar.getCount()) ? null : gVar.getItem(i6);
            n.l lVar = this.M;
            if (lVar != item) {
                n.j jVar = gVar.f14640d;
                if (lVar != null) {
                    this.L.g(jVar, lVar);
                }
                this.M = item;
                if (item != null) {
                    this.L.x(jVar, item);
                }
            }
        }
        return super.onHoverEvent(motionEvent);
    }

    @Override // android.widget.ListView, android.widget.AbsListView, android.view.View, android.view.KeyEvent.Callback
    public final boolean onKeyDown(int i5, KeyEvent keyEvent) {
        ListMenuItemView listMenuItemView = (ListMenuItemView) getSelectedView();
        if (listMenuItemView != null && i5 == this.J) {
            if (listMenuItemView.isEnabled() && listMenuItemView.getItemData().hasSubMenu()) {
                performItemClick(listMenuItemView, getSelectedItemPosition(), getSelectedItemId());
            }
            return true;
        }
        if (listMenuItemView == null || i5 != this.K) {
            return super.onKeyDown(i5, keyEvent);
        }
        setSelection(-1);
        ListAdapter adapter = getAdapter();
        (adapter instanceof HeaderViewListAdapter ? (n.g) ((HeaderViewListAdapter) adapter).getWrappedAdapter() : (n.g) adapter).f14640d.c(false);
        return true;
    }

    public void setHoverListener(h2 h2Var) {
        this.L = h2Var;
    }

    @Override // androidx.appcompat.widget.t1, android.widget.AbsListView
    public /* bridge */ /* synthetic */ void setSelector(Drawable drawable) {
        super.setSelector(drawable);
    }
}
