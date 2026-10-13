package nd;

import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import java.io.IOException;

/* loaded from: classes3.dex */
public interface x {
    void b(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData);

    void f(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData);

    void h(int i5, s sVar, MediaLoadData mediaLoadData);

    void v(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException iOException, boolean z5);

    void y(int i5, s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData);

    void z(int i5, s sVar, MediaLoadData mediaLoadData);
}
