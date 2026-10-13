package el;

import com.otaliastudios.zoom.ZoomEngine;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class g extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8160d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ZoomEngine f8161e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ g(ZoomEngine zoomEngine, int i5) {
        super(0);
        this.f8160d = i5;
        this.f8161e = zoomEngine;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f8160d) {
        }
        return this.f8161e.f6628i;
    }
}
