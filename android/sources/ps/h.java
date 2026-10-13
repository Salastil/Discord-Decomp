package ps;

import java.io.IOException;
import okhttp3.Call;
import okhttp3.Response;

/* loaded from: classes3.dex */
public interface h {
    void onFailure(Call call, IOException iOException);

    void onResponse(Call call, Response response);
}
