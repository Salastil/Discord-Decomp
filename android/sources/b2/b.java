package b2;

import android.database.Cursor;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.Filter;
import android.widget.Filterable;
import androidx.appcompat.widget.d2;
import androidx.appcompat.widget.h3;
import k0.d;

/* loaded from: classes.dex */
public abstract class b extends BaseAdapter implements Filterable {

    /* renamed from: d, reason: collision with root package name */
    public boolean f2725d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f2726e;

    /* renamed from: i, reason: collision with root package name */
    public Cursor f2727i;

    /* renamed from: v, reason: collision with root package name */
    public int f2728v;

    /* renamed from: w, reason: collision with root package name */
    public a f2729w;

    /* renamed from: x, reason: collision with root package name */
    public d2 f2730x;

    /* renamed from: y, reason: collision with root package name */
    public c f2731y;

    public abstract void a(View view, Cursor cursor);

    public void b(Cursor cursor) {
        Cursor cursor2 = this.f2727i;
        if (cursor == cursor2) {
            cursor2 = null;
        } else {
            if (cursor2 != null) {
                a aVar = this.f2729w;
                if (aVar != null) {
                    cursor2.unregisterContentObserver(aVar);
                }
                d2 d2Var = this.f2730x;
                if (d2Var != null) {
                    cursor2.unregisterDataSetObserver(d2Var);
                }
            }
            this.f2727i = cursor;
            if (cursor != null) {
                a aVar2 = this.f2729w;
                if (aVar2 != null) {
                    cursor.registerContentObserver(aVar2);
                }
                d2 d2Var2 = this.f2730x;
                if (d2Var2 != null) {
                    cursor.registerDataSetObserver(d2Var2);
                }
                this.f2728v = cursor.getColumnIndexOrThrow("_id");
                this.f2725d = true;
                notifyDataSetChanged();
            } else {
                this.f2728v = -1;
                this.f2725d = false;
                notifyDataSetInvalidated();
            }
        }
        if (cursor2 != null) {
            cursor2.close();
        }
    }

    public abstract String c(Cursor cursor);

    public abstract View d(ViewGroup viewGroup);

    @Override // android.widget.Adapter
    public final int getCount() {
        Cursor cursor;
        if (!this.f2725d || (cursor = this.f2727i) == null) {
            return 0;
        }
        return cursor.getCount();
    }

    @Override // android.widget.BaseAdapter, android.widget.SpinnerAdapter
    public View getDropDownView(int i5, View view, ViewGroup viewGroup) {
        if (!this.f2725d) {
            return null;
        }
        this.f2727i.moveToPosition(i5);
        if (view == null) {
            h3 h3Var = (h3) this;
            view = h3Var.G.inflate(h3Var.F, viewGroup, false);
        }
        a(view, this.f2727i);
        return view;
    }

    @Override // android.widget.Filterable
    public final Filter getFilter() {
        if (this.f2731y == null) {
            c cVar = new c();
            cVar.a = this;
            this.f2731y = cVar;
        }
        return this.f2731y;
    }

    @Override // android.widget.Adapter
    public final Object getItem(int i5) {
        Cursor cursor;
        if (!this.f2725d || (cursor = this.f2727i) == null) {
            return null;
        }
        cursor.moveToPosition(i5);
        return this.f2727i;
    }

    @Override // android.widget.Adapter
    public final long getItemId(int i5) {
        Cursor cursor;
        if (this.f2725d && (cursor = this.f2727i) != null && cursor.moveToPosition(i5)) {
            return this.f2727i.getLong(this.f2728v);
        }
        return 0L;
    }

    @Override // android.widget.Adapter
    public View getView(int i5, View view, ViewGroup viewGroup) {
        if (!this.f2725d) {
            throw new IllegalStateException("this should only be called when the cursor is valid");
        }
        if (!this.f2727i.moveToPosition(i5)) {
            throw new IllegalStateException(d.i(i5, "couldn't move cursor to position "));
        }
        if (view == null) {
            view = d(viewGroup);
        }
        a(view, this.f2727i);
        return view;
    }
}
