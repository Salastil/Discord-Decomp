package kr;

import androidx.core.view.v0;
import androidx.core.view.w0;
import java.util.Iterator;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;

/* loaded from: classes3.dex */
public final class r extends lo.g implements Function2 {

    /* renamed from: e, reason: collision with root package name */
    public Iterator f13656e;

    /* renamed from: i, reason: collision with root package name */
    public Object f13657i;

    /* renamed from: v, reason: collision with root package name */
    public int f13658v;

    /* renamed from: w, reason: collision with root package name */
    public /* synthetic */ Object f13659w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ v0 f13660x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ com.discord.c f13661y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r(v0 v0Var, com.discord.c cVar, Continuation continuation) {
        super(2, continuation);
        this.f13660x = v0Var;
        this.f13661y = cVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        r rVar = new r(this.f13660x, this.f13661y, continuation);
        rVar.f13659w = obj;
        return rVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((r) create((k) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        k kVar;
        Iterator it;
        Object next;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f13658v;
        if (i5 == 0) {
            ki.b.R(obj);
            kVar = (k) this.f13659w;
            it = this.f13660x.iterator();
            w0 w0Var = (w0) it;
            if (!w0Var.hasNext()) {
                return Unit.a;
            }
            next = w0Var.next();
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            next = this.f13657i;
            it = this.f13656e;
            kVar = (k) this.f13659w;
            ki.b.R(obj);
        }
        if (!it.hasNext()) {
            return Unit.a;
        }
        Object next2 = it.next();
        Pair pair = new Pair(next, next2);
        this.f13659w = kVar;
        this.f13656e = it;
        this.f13657i = next2;
        this.f13658v = 1;
        kVar.a(pair, this);
        return aVar;
    }
}
