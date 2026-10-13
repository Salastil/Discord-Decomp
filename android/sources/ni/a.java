package ni;

import android.graphics.Bitmap;
import android.util.Log;
import android.view.View;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import com.facebook.common.references.CloseableReference;
import com.facebook.fresco.animation.factory.AnimatedFactoryV2Impl;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.react.common.assets.ReactFontManager;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.net.ConnectException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.UnknownHostException;
import java.util.zip.GZIPInputStream;
import java.util.zip.GZIPOutputStream;
import ke.d0;
import nd.m0;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements e, ch.j, jg.d, AccessibilityViewCommand, qc.c, ma.b, ei.e {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15478d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f15479e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f15478d = i5;
        this.f15479e = obj;
    }

    public m0 a(k2.r rVar) {
        ub.b bVar = (ub.b) this.f15479e;
        URL url = (URL) rVar.f13142e;
        String s2 = io.sentry.config.a.s("CctTransportBackend");
        if (Log.isLoggable(s2, 4)) {
            Log.i(s2, String.format("Making request to: %s", url));
        }
        HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
        httpURLConnection.setConnectTimeout(30000);
        httpURLConnection.setReadTimeout(bVar.f18828g);
        httpURLConnection.setDoOutput(true);
        httpURLConnection.setInstanceFollowRedirects(false);
        httpURLConnection.setRequestMethod("POST");
        httpURLConnection.setRequestProperty("User-Agent", "datatransport/3.1.9 android/");
        httpURLConnection.setRequestProperty("Content-Encoding", "gzip");
        httpURLConnection.setRequestProperty("Content-Type", "application/json");
        httpURLConnection.setRequestProperty("Accept-Encoding", "gzip");
        String str = (String) rVar.f13144v;
        if (str != null) {
            httpURLConnection.setRequestProperty("X-Goog-Api-Key", str);
        }
        try {
            OutputStream outputStream = httpURLConnection.getOutputStream();
            try {
                GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(outputStream);
                try {
                    qd.f fVar = bVar.a;
                    vb.i iVar = (vb.i) rVar.f13143i;
                    BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(gZIPOutputStream));
                    ti.d dVar = (ti.d) fVar.f16831e;
                    ti.e eVar = new ti.e(bufferedWriter, dVar.a, dVar.f18647b, dVar.f18648c, dVar.f18649d);
                    eVar.f(iVar);
                    eVar.h();
                    eVar.f18650b.flush();
                    gZIPOutputStream.close();
                    if (outputStream != null) {
                        outputStream.close();
                    }
                    int responseCode = httpURLConnection.getResponseCode();
                    Integer valueOf = Integer.valueOf(responseCode);
                    String s5 = io.sentry.config.a.s("CctTransportBackend");
                    if (Log.isLoggable(s5, 4)) {
                        Log.i(s5, String.format("Status Code: %d", valueOf));
                    }
                    io.sentry.config.a.k(httpURLConnection.getHeaderField("Content-Type"), "CctTransportBackend", "Content-Type: %s");
                    io.sentry.config.a.k(httpURLConnection.getHeaderField("Content-Encoding"), "CctTransportBackend", "Content-Encoding: %s");
                    if (responseCode == 302 || responseCode == 301 || responseCode == 307) {
                        return new m0(responseCode, new URL(httpURLConnection.getHeaderField("Location")), 0L);
                    }
                    if (responseCode != 200) {
                        return new m0(responseCode, null, 0L);
                    }
                    InputStream inputStream = httpURLConnection.getInputStream();
                    try {
                        InputStream gZIPInputStream = "gzip".equals(httpURLConnection.getHeaderField("Content-Encoding")) ? new GZIPInputStream(inputStream) : inputStream;
                        try {
                            m0 m0Var = new m0(responseCode, null, vb.m.a(new BufferedReader(new InputStreamReader(gZIPInputStream))).a);
                            if (gZIPInputStream != null) {
                                gZIPInputStream.close();
                            }
                            if (inputStream != null) {
                                inputStream.close();
                            }
                            return m0Var;
                        } finally {
                        }
                    } finally {
                    }
                } finally {
                }
            } finally {
            }
        } catch (ConnectException e9) {
            e = e9;
            io.sentry.config.a.m("CctTransportBackend", "Couldn't open connection, returning with 500", e);
            return new m0(500, null, 0L);
        } catch (UnknownHostException e10) {
            e = e10;
            io.sentry.config.a.m("CctTransportBackend", "Couldn't open connection, returning with 500", e);
            return new m0(500, null, 0L);
        } catch (IOException e11) {
            e = e11;
            io.sentry.config.a.m("CctTransportBackend", "Couldn't encode request, returning with 400", e);
            return new m0(ReactFontManager.TypefaceStyle.NORMAL, null, 0L);
        } catch (ri.b e12) {
            e = e12;
            io.sentry.config.a.m("CctTransportBackend", "Couldn't encode request, returning with 400", e);
            return new m0(ReactFontManager.TypefaceStyle.NORMAL, null, 0L);
        }
    }

    @Override // ei.e
    public Object apply(Object obj) {
        yc.o oVar = (yc.o) obj;
        ((yc.i) this.f15479e).getClass();
        return oVar;
    }

    @Override // qc.c
    public long b(long j) {
        return d0.j((j * r0.f16786e) / 1000000, 0L, ((qc.o) this.f15479e).j - 1);
    }

    @Override // androidx.core.view.accessibility.AccessibilityViewCommand
    public boolean c(View view, AccessibilityViewCommand.CommandArguments commandArguments) {
        return ((sg.f) this.f15479e).a();
    }

    @Override // ni.e
    public Object g(am.f fVar) {
        return this.f15479e;
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        switch (this.f15478d) {
            case 2:
                ((s1.d) this.f15479e).invoke(obj);
                break;
            case 6:
                ((com.discord.permissions.b) this.f15479e).invoke(obj);
                break;
            case 9:
                ((com.discord.permissions.b) this.f15479e).invoke(obj);
                break;
            case 10:
                ((com.discord.media.engine.video.a) this.f15479e).invoke(obj);
                break;
            case 11:
                ((com.discord.media.engine.video.a) this.f15479e).invoke(obj);
                break;
            case 13:
                ((com.discord.permissions.b) this.f15479e).invoke(obj);
                break;
            default:
                ((t1.e) this.f15479e).invoke(obj);
                break;
        }
    }

    @Override // ma.b
    public oa.c p(EncodedImage encodedImage, int i5, oa.k kVar, ImageDecodeOptions imageDecodeOptions) {
        AnimatedFactoryV2Impl animatedFactoryV2Impl = (AnimatedFactoryV2Impl) this.f15479e;
        if (animatedFactoryV2Impl.f4511e == null) {
            animatedFactoryV2Impl.f4511e = new ca.b(new r3.g(5, animatedFactoryV2Impl), animatedFactoryV2Impl.a, animatedFactoryV2Impl.k);
        }
        ca.b bVar = animatedFactoryV2Impl.f4511e;
        Bitmap.Config config = imageDecodeOptions.f4578b;
        bVar.getClass();
        ca.a aVar = ca.b.f3363b;
        if (aVar == null) {
            throw new UnsupportedOperationException("To encode animated webp please add the dependency to the animated-webp module");
        }
        CloseableReference byteBufferRef = encodedImage.getByteBufferRef();
        byteBufferRef.getClass();
        try {
            qa.q qVar = (qa.q) byteBufferRef.q();
            oa.b a = ca.b.a(encodedImage.getSource(), imageDecodeOptions, qVar.f() != null ? aVar.a(qVar.f(), imageDecodeOptions) : aVar.b(qVar.g(), qVar.o(), imageDecodeOptions));
            byteBufferRef.close();
            return a;
        } catch (Throwable th2) {
            byteBufferRef.close();
            throw th2;
        }
    }
}
