package com.google.firebase.messaging;

import android.content.Context;
import android.content.Intent;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.gms.tasks.Task;
import fi.q0;
import fi.r0;
import java.util.Arrays;
import nd.z0;

/* loaded from: classes3.dex */
public final /* synthetic */ class g implements jg.a, ge.l {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ boolean f6235d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f6236e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f6237i;

    public /* synthetic */ g(Object obj, Object obj2, boolean z5) {
        this.f6236e = obj;
        this.f6237i = obj2;
        this.f6235d = z5;
    }

    @Override // jg.a
    public Object N(Task task) {
        return (gf.c.c() && ((Integer) task.i()).intValue() == 402) ? h.a((Context) this.f6236e, (Intent) this.f6237i, this.f6235d).f(new com.discord.misc.utilities.threading.a(1), new com.facebook.imageutils.a(28)) : task;
    }

    @Override // ge.l
    public r0 a(int i5, z0 z0Var, int[] iArr) {
        Object[] objArr;
        DefaultTrackSelector defaultTrackSelector = (DefaultTrackSelector) this.f6236e;
        com.google.android.exoplayer2.trackselection.a aVar = (com.google.android.exoplayer2.trackselection.a) this.f6237i;
        q0 q0Var = DefaultTrackSelector.k;
        defaultTrackSelector.getClass();
        ge.d dVar = new ge.d(defaultTrackSelector);
        fi.c0 c0Var = fi.e0.f8656e;
        fi.p.c(4, "initialCapacity");
        Object[] objArr2 = new Object[4];
        int i6 = 0;
        int i10 = 0;
        boolean z5 = false;
        while (i6 < z0Var.f15208d) {
            int i11 = i5;
            z0 z0Var2 = z0Var;
            ge.e eVar = new ge.e(i11, z0Var2, i6, aVar, iArr[i6], this.f6235d, dVar);
            int i12 = i10 + 1;
            if (objArr2.length < i12) {
                objArr = Arrays.copyOf(objArr2, fi.y.d(objArr2.length, i12));
            } else if (z5) {
                objArr = (Object[]) objArr2.clone();
            } else {
                objArr2[i10] = eVar;
                i6++;
                i10++;
                i5 = i11;
                z0Var = z0Var2;
            }
            objArr2 = objArr;
            z5 = false;
            objArr2[i10] = eVar;
            i6++;
            i10++;
            i5 = i11;
            z0Var = z0Var2;
        }
        return fi.e0.j(i10, objArr2);
    }
}
