package pl;

import android.content.Context;
import android.net.Uri;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableArray;
import java.util.Iterator;
import java.util.List;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.x;

/* loaded from: classes3.dex */
public final class d extends lo.h implements Function2 {
    public final /* synthetic */ f E;

    /* renamed from: d, reason: collision with root package name */
    public WritableArray f16439d;

    /* renamed from: e, reason: collision with root package name */
    public Iterator f16440e;

    /* renamed from: i, reason: collision with root package name */
    public Uri f16441i;

    /* renamed from: v, reason: collision with root package name */
    public int f16442v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ List f16443w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ e f16444x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Context f16445y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(List list, e eVar, Context context, f fVar, Continuation continuation) {
        super(2, continuation);
        this.f16443w = list;
        this.f16444x = eVar;
        this.f16445y = context;
        this.E = fVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new d(this.f16443w, this.f16444x, this.f16445y, this.E, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((d) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x006d A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0030  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:12:0x0054 -> B:5:0x0058). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        WritableArray createArray;
        Iterator it;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f16442v;
        e eVar = this.f16444x;
        if (i5 == 0) {
            ki.b.R(obj);
            createArray = Arguments.createArray();
            it = this.f16443w.iterator();
            if (it.hasNext()) {
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            Uri uri = this.f16441i;
            Iterator it2 = this.f16440e;
            WritableArray writableArray = this.f16439d;
            ki.b.R(obj);
            eVar.a.put(uri.toString(), uri);
            writableArray.pushMap(((b) obj).a());
            it = it2;
            createArray = writableArray;
            if (it.hasNext()) {
                Uri uri2 = (Uri) it.next();
                this.f16439d = createArray;
                this.f16440e = it;
                this.f16441i = uri2;
                this.f16442v = 1;
                ur.e eVar2 = g0.a;
                Object A = x.A(ur.d.f19093i, new co.a(this.f16445y, uri2, this.E, eVar, (Continuation) null), this);
                if (A == aVar) {
                    return aVar;
                }
                writableArray = createArray;
                obj = A;
                it2 = it;
                uri = uri2;
                eVar.a.put(uri.toString(), uri);
                writableArray.pushMap(((b) obj).a());
                it = it2;
                createArray = writableArray;
                if (it.hasNext()) {
                    return createArray;
                }
            }
        }
    }
}
