package co.discord.media_engine;

import com.discord.age_assurance.c;
import java.util.LinkedHashSet;
import java.util.function.Consumer;
import org.webrtc.VideoCodecInfo;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Consumer {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f3595b;

    public /* synthetic */ b(int i5, Object obj) {
        this.a = i5;
        this.f3595b = obj;
    }

    @Override // java.util.function.Consumer
    public final void accept(Object obj) {
        switch (this.a) {
            case 0:
                ((LinkedHashSet) this.f3595b).add((VideoCodecInfo) obj);
                break;
            case 1:
                ((c) this.f3595b).invoke(obj);
                break;
            default:
                ((c) this.f3595b).invoke(obj);
                break;
        }
    }
}
