package com.facebook.react.devsupport;

import com.facebook.react.common.ReactConstants;
import com.facebook.react.devsupport.inspector.DevSupportHttpClient;
import com.facebook.react.devsupport.interfaces.PackagerStatusCallback;
import java.io.IOException;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import okhttp3.Call;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 \r2\u00020\u0001:\u0001\rB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005B\t\b\u0016¢\u0006\u0004\b\u0004\u0010\u0006J\u0016\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/facebook/react/devsupport/PackagerStatusCheck;", "", "client", "Lokhttp3/OkHttpClient;", "<init>", "(Lokhttp3/OkHttpClient;)V", "()V", "run", "", "host", "", "callback", "Lcom/facebook/react/devsupport/interfaces/PackagerStatusCallback;", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class PackagerStatusCheck {

    @NotNull
    private static final Companion Companion = new Companion(null);

    @NotNull
    private static final String PACKAGER_OK_STATUS = "packager-status:running";

    @NotNull
    private static final String PACKAGER_STATUS_URL_TEMPLATE = "%s://%s/status";

    @NotNull
    private final OkHttpClient client;

    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0007\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\u0005H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lcom/facebook/react/devsupport/PackagerStatusCheck$Companion;", "", "<init>", "()V", "PACKAGER_OK_STATUS", "", "PACKAGER_STATUS_URL_TEMPLATE", "createPackagerStatusURL", "host", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final String createPackagerStatusURL(String host) {
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            return a3.e.p(new Object[]{DevSupportHttpClient.INSTANCE.httpScheme$ReactAndroid_release(host), host}, 2, Locale.US, PackagerStatusCheck.PACKAGER_STATUS_URL_TEMPLATE, "format(...)");
        }

        private Companion() {
        }
    }

    public PackagerStatusCheck(@NotNull OkHttpClient client) {
        Intrinsics.checkNotNullParameter(client, "client");
        this.client = client;
    }

    public final void run(@NotNull String host, @NotNull final PackagerStatusCallback callback) {
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(callback, "callback");
        String createPackagerStatusURL = Companion.createPackagerStatusURL(host);
        Request.Builder builder = new Request.Builder();
        builder.i(createPackagerStatusURL);
        this.client.a(builder.b()).d(new ps.h() { // from class: com.facebook.react.devsupport.PackagerStatusCheck$run$1
            @Override // ps.h
            public void onFailure(Call call, IOException e9) {
                Intrinsics.checkNotNullParameter(call, "call");
                Intrinsics.checkNotNullParameter(e9, "e");
                p8.a.v(ReactConstants.TAG, "The packager does not seem to be running as we got an IOException requesting its status: " + e9.getMessage());
                PackagerStatusCallback.this.onPackagerStatusFetched(false);
            }

            @Override // ps.h
            public void onResponse(Call call, Response response) {
                Intrinsics.checkNotNullParameter(call, "call");
                Intrinsics.checkNotNullParameter(response, "response");
                if (!response.g()) {
                    p8.a.g(ReactConstants.TAG, "Got non-success http code from packager when requesting status: " + response.f16088v);
                    PackagerStatusCallback.this.onPackagerStatusFetched(false);
                    return;
                }
                ResponseBody responseBody = response.f16091y;
                if (responseBody == null) {
                    p8.a.g(ReactConstants.TAG, "Got null body response from packager when requesting status");
                    PackagerStatusCallback.this.onPackagerStatusFetched(false);
                    return;
                }
                String string = responseBody.string();
                if (Intrinsics.areEqual("packager-status:running", string)) {
                    PackagerStatusCallback.this.onPackagerStatusFetched(true);
                    return;
                }
                p8.a.g(ReactConstants.TAG, "Got unexpected response from packager when requesting status: " + string);
                PackagerStatusCallback.this.onPackagerStatusFetched(false);
            }
        });
    }

    public PackagerStatusCheck() {
        this(DevSupportHttpClient.INSTANCE.getHttpClient$ReactAndroid_release());
    }
}
