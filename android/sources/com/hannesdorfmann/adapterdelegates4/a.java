package com.hannesdorfmann.adapterdelegates4;

import android.view.ViewGroup;
import androidx.annotation.NonNull;
import androidx.collection.SparseArrayCompat;
import androidx.recyclerview.widget.RecyclerView;
import java.util.List;
import k0.d;

/* loaded from: classes3.dex */
public abstract class a extends RecyclerView.Adapter {
    protected AdapterDelegatesManager delegatesManager;
    protected Object items;

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemViewType(int i5) {
        AdapterDelegatesManager adapterDelegatesManager = this.delegatesManager;
        Object obj = this.items;
        SparseArrayCompat sparseArrayCompat = adapterDelegatesManager.a;
        if (obj == null) {
            throw new NullPointerException("Items datasource is null!");
        }
        int g6 = sparseArrayCompat.g();
        for (int i6 = 0; i6 < g6; i6++) {
            if (((b) sparseArrayCompat.h(i6)).isForViewType(obj, i5)) {
                return sparseArrayCompat.d(i6);
            }
        }
        throw new NullPointerException(obj instanceof List ? "No AdapterDelegate added that matches item=" + ((List) obj).get(i5).toString() + " at position=" + i5 + " in data source" : "No AdapterDelegate added for item at position=" + i5 + ". items=" + obj);
    }

    public Object getItems() {
        return this.items;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(@NonNull RecyclerView.ViewHolder viewHolder, int i5) {
        this.delegatesManager.b(this.items, i5, viewHolder, null);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    @NonNull
    public RecyclerView.ViewHolder onCreateViewHolder(@NonNull ViewGroup viewGroup, int i5) {
        b a = this.delegatesManager.a(i5);
        if (a == null) {
            throw new NullPointerException(d.i(i5, "No AdapterDelegate added for ViewType "));
        }
        RecyclerView.ViewHolder onCreateViewHolder = a.onCreateViewHolder(viewGroup);
        if (onCreateViewHolder != null) {
            return onCreateViewHolder;
        }
        throw new NullPointerException("ViewHolder returned from AdapterDelegate " + a + " for ViewType =" + i5 + " is null!");
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public boolean onFailedToRecycleView(@NonNull RecyclerView.ViewHolder viewHolder) {
        AdapterDelegatesManager adapterDelegatesManager = this.delegatesManager;
        adapterDelegatesManager.getClass();
        b a = adapterDelegatesManager.a(viewHolder.getItemViewType());
        if (a != null) {
            return a.onFailedToRecycleView(viewHolder);
        }
        throw new NullPointerException("No delegate found for " + viewHolder + " for item at position = " + viewHolder.getAdapterPosition() + " for viewType = " + viewHolder.getItemViewType());
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onViewAttachedToWindow(@NonNull RecyclerView.ViewHolder viewHolder) {
        AdapterDelegatesManager adapterDelegatesManager = this.delegatesManager;
        adapterDelegatesManager.getClass();
        b a = adapterDelegatesManager.a(viewHolder.getItemViewType());
        if (a != null) {
            a.onViewAttachedToWindow(viewHolder);
            return;
        }
        throw new NullPointerException("No delegate found for " + viewHolder + " for item at position = " + viewHolder.getAdapterPosition() + " for viewType = " + viewHolder.getItemViewType());
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onViewDetachedFromWindow(@NonNull RecyclerView.ViewHolder viewHolder) {
        AdapterDelegatesManager adapterDelegatesManager = this.delegatesManager;
        adapterDelegatesManager.getClass();
        b a = adapterDelegatesManager.a(viewHolder.getItemViewType());
        if (a != null) {
            a.onViewDetachedFromWindow(viewHolder);
            return;
        }
        throw new NullPointerException("No delegate found for " + viewHolder + " for item at position = " + viewHolder.getAdapterPosition() + " for viewType = " + viewHolder.getItemViewType());
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onViewRecycled(@NonNull RecyclerView.ViewHolder viewHolder) {
        AdapterDelegatesManager adapterDelegatesManager = this.delegatesManager;
        adapterDelegatesManager.getClass();
        b a = adapterDelegatesManager.a(viewHolder.getItemViewType());
        if (a != null) {
            a.onViewRecycled(viewHolder);
            return;
        }
        throw new NullPointerException("No delegate found for " + viewHolder + " for item at position = " + viewHolder.getAdapterPosition() + " for viewType = " + viewHolder.getItemViewType());
    }

    public void setItems(Object obj) {
        this.items = obj;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(@NonNull RecyclerView.ViewHolder viewHolder, int i5, @NonNull List list) {
        this.delegatesManager.b(this.items, i5, viewHolder, list);
    }
}
