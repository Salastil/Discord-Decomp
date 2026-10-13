package qd;

import android.os.Handler;
import android.os.Message;
import java.util.TreeMap;
import ke.d0;

/* loaded from: classes3.dex */
public final class q implements Handler.Callback {
    public boolean E;
    public boolean F;

    /* renamed from: d, reason: collision with root package name */
    public final ie.q f16873d;

    /* renamed from: e, reason: collision with root package name */
    public final f f16874e;

    /* renamed from: x, reason: collision with root package name */
    public rd.c f16878x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f16879y;

    /* renamed from: w, reason: collision with root package name */
    public final TreeMap f16877w = new TreeMap();

    /* renamed from: v, reason: collision with root package name */
    public final Handler f16876v = d0.m(this);

    /* renamed from: i, reason: collision with root package name */
    public final ed.b f16875i = new ed.b(1);

    public q(rd.c cVar, f fVar, ie.q qVar) {
        this.f16878x = cVar;
        this.f16874e = fVar;
        this.f16873d = qVar;
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        if (!this.F) {
            if (message.what != 1) {
                return false;
            }
            o oVar = (o) message.obj;
            long j = oVar.a;
            long j5 = oVar.f16868b;
            Long valueOf = Long.valueOf(j5);
            TreeMap treeMap = this.f16877w;
            Long l6 = (Long) treeMap.get(valueOf);
            if (l6 == null) {
                treeMap.put(Long.valueOf(j5), Long.valueOf(j));
                return true;
            }
            if (l6.longValue() > j) {
                treeMap.put(Long.valueOf(j5), Long.valueOf(j));
            }
        }
        return true;
    }
}
