package androidx.recyclerview.widget;

import android.util.Log;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class a1 {
    public final /* synthetic */ RecyclerView a;

    public a1(RecyclerView recyclerView) {
        this.a = recyclerView;
    }

    public final void a(a aVar) {
        int i5 = aVar.a;
        RecyclerView recyclerView = this.a;
        if (i5 == 1) {
            recyclerView.mLayout.onItemsAdded(recyclerView, aVar.f2355b, aVar.f2357d);
            return;
        }
        if (i5 == 2) {
            recyclerView.mLayout.onItemsRemoved(recyclerView, aVar.f2355b, aVar.f2357d);
        } else if (i5 == 4) {
            recyclerView.mLayout.onItemsUpdated(recyclerView, aVar.f2355b, aVar.f2357d, aVar.f2356c);
        } else {
            if (i5 != 8) {
                return;
            }
            recyclerView.mLayout.onItemsMoved(recyclerView, aVar.f2355b, aVar.f2357d, 1);
        }
    }

    public final RecyclerView.ViewHolder b(int i5) {
        RecyclerView recyclerView = this.a;
        RecyclerView.ViewHolder findViewHolderForPosition = recyclerView.findViewHolderForPosition(i5, true);
        if (findViewHolderForPosition != null) {
            ChildHelper childHelper = recyclerView.mChildHelper;
            if (!childHelper.f2264c.contains(findViewHolderForPosition.itemView)) {
                return findViewHolderForPosition;
            }
            if (RecyclerView.sVerboseLoggingEnabled) {
                Log.d("RecyclerView", "assuming view holder cannot be find because it is hidden");
            }
        }
        return null;
    }
}
