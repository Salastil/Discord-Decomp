package ti;

import java.util.Map;
import ui.f;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements ri.d {
    public final /* synthetic */ int a;

    @Override // ri.a
    public final void a(Object obj, Object obj2) {
        switch (this.a) {
            case 0:
                throw new ri.b("Couldn't find encoder for type " + obj.getClass().getCanonicalName());
            case 1:
                Map.Entry entry = (Map.Entry) obj;
                ri.e eVar = (ri.e) obj2;
                eVar.a(f.f18936g, entry.getKey());
                eVar.a(f.f18937h, entry.getValue());
                return;
            default:
                throw new ri.b("Couldn't find encoder for type " + obj.getClass().getCanonicalName());
        }
    }
}
