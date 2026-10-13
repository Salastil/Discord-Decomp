package e2;

import java.io.File;
import java.io.FileOutputStream;

/* loaded from: classes.dex */
public final class y extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public z f7914d;

    /* renamed from: e, reason: collision with root package name */
    public File f7915e;

    /* renamed from: i, reason: collision with root package name */
    public FileOutputStream f7916i;

    /* renamed from: v, reason: collision with root package name */
    public FileOutputStream f7917v;

    /* renamed from: w, reason: collision with root package name */
    public /* synthetic */ Object f7918w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ z f7919x;

    /* renamed from: y, reason: collision with root package name */
    public int f7920y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public y(z zVar, lo.c cVar) {
        super(cVar);
        this.f7919x = zVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f7918w = obj;
        this.f7920y |= Integer.MIN_VALUE;
        return this.f7919x.i(null, this);
    }
}
