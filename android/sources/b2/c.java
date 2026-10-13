package b2;

import android.database.Cursor;
import android.util.Log;
import android.widget.Filter;
import androidx.appcompat.widget.f3;
import androidx.appcompat.widget.h3;

/* loaded from: classes.dex */
public final class c extends Filter {
    public b a;

    @Override // android.widget.Filter
    public final CharSequence convertResultToString(Object obj) {
        return ((h3) this.a).c((Cursor) obj);
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0039  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0042  */
    @Override // android.widget.Filter
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Filter.FilterResults performFiltering(CharSequence charSequence) {
        Cursor cursor;
        h3 h3Var = (h3) this.a;
        f3 f3Var = h3Var.H;
        String charSequence2 = charSequence == null ? "" : charSequence.toString();
        if (f3Var.getVisibility() == 0 && f3Var.getWindowVisibility() == 0) {
            try {
                cursor = h3Var.g(h3Var.I, charSequence2);
            } catch (RuntimeException e9) {
                Log.w("SuggestionsAdapter", "Search suggestions query threw an exception.", e9);
            }
            if (cursor != null) {
                cursor.getCount();
                Filter.FilterResults filterResults = new Filter.FilterResults();
                if (cursor == null) {
                    filterResults.count = cursor.getCount();
                    filterResults.values = cursor;
                } else {
                    filterResults.count = 0;
                    filterResults.values = null;
                }
                return filterResults;
            }
        }
        cursor = null;
        Filter.FilterResults filterResults2 = new Filter.FilterResults();
        if (cursor == null) {
        }
        return filterResults2;
    }

    @Override // android.widget.Filter
    public final void publishResults(CharSequence charSequence, Filter.FilterResults filterResults) {
        b bVar = this.a;
        Cursor cursor = bVar.f2727i;
        Object obj = filterResults.values;
        if (obj == null || obj == cursor) {
            return;
        }
        ((h3) bVar).b((Cursor) obj);
    }
}
