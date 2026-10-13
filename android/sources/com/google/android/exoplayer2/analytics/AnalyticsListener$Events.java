package com.google.android.exoplayer2.analytics;

import android.util.SparseArray;
import android.util.SparseBooleanArray;
import ke.g;

/* loaded from: classes3.dex */
public final class AnalyticsListener$Events {
    public final g a;

    /* renamed from: b, reason: collision with root package name */
    public final SparseArray f5312b;

    public AnalyticsListener$Events(g gVar, SparseArray sparseArray) {
        this.a = gVar;
        SparseBooleanArray sparseBooleanArray = gVar.a;
        SparseArray sparseArray2 = new SparseArray(sparseBooleanArray.size());
        for (int i5 = 0; i5 < sparseBooleanArray.size(); i5++) {
            int a = gVar.a(i5);
            AnalyticsListener$EventTime analyticsListener$EventTime = (AnalyticsListener$EventTime) sparseArray.get(a);
            analyticsListener$EventTime.getClass();
            sparseArray2.append(a, analyticsListener$EventTime);
        }
        this.f5312b = sparseArray2;
    }

    public final boolean a(int i5) {
        return this.a.a.get(i5);
    }

    public final AnalyticsListener$EventTime b(int i5) {
        AnalyticsListener$EventTime analyticsListener$EventTime = (AnalyticsListener$EventTime) this.f5312b.get(i5);
        analyticsListener$EventTime.getClass();
        return analyticsListener$EventTime;
    }
}
