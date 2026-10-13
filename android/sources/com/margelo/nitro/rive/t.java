package com.margelo.nitro.rive;

import com.facebook.react.bridge.ReactApplicationContext;
import com.margelo.nitro.NitroModules;
import java.io.File;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes3.dex */
public final class t extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6596d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f6597e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ t(Object obj, Continuation continuation, int i5) {
        super(2, continuation);
        this.f6596d = i5;
        this.f6597e = obj;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f6596d) {
            case 0:
                return new t((String) this.f6597e, continuation, 0);
            case 1:
                return new t((String) this.f6597e, continuation, 1);
            case 2:
                return new t((String) this.f6597e, continuation, 2);
            case 3:
                return new t((String) this.f6597e, continuation, 3);
            default:
                return new t((nr.o) this.f6597e, continuation, 4);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f6596d) {
        }
        return ((t) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5;
        int i6 = this.f6596d;
        Object obj2 = this.f6597e;
        switch (i6) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                String path = (String) obj2;
                File file = new File(path);
                if (file.exists()) {
                    return qo.l.b(file);
                }
                Intrinsics.checkNotNullParameter(path, "path");
                throw new h("File not found: " + path);
            case 1:
                String url = (String) obj2;
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                try {
                    URLConnection openConnection = new URL(url).openConnection();
                    Intrinsics.checkNotNull(openConnection, "null cannot be cast to non-null type java.net.HttpURLConnection");
                    HttpURLConnection httpURLConnection = (HttpURLConnection) openConnection;
                    try {
                        httpURLConnection.setRequestMethod("GET");
                        int responseCode = httpURLConnection.getResponseCode();
                        if (200 > responseCode || responseCode >= 300) {
                            Intrinsics.checkNotNullParameter(url, "url");
                            throw new h("HTTP error " + responseCode + " for " + url);
                        }
                        InputStream inputStream = httpURLConnection.getInputStream();
                        try {
                            Intrinsics.checkNotNull(inputStream);
                            byte[] E = com.facebook.imagepipeline.nativecode.b.E(inputStream);
                            com.facebook.imagepipeline.nativecode.c.j(inputStream, null);
                            return E;
                        } finally {
                        }
                    } finally {
                        httpURLConnection.disconnect();
                    }
                } catch (MalformedURLException unused) {
                    throw new h(url);
                }
            case 2:
                ko.a aVar3 = ko.a.f13464d;
                ki.b.R(obj);
                URL url2 = new URL((String) obj2);
                Intrinsics.checkNotNullParameter(url2, "<this>");
                InputStream openStream = url2.openStream();
                try {
                    Intrinsics.checkNotNull(openStream);
                    byte[] E2 = com.facebook.imagepipeline.nativecode.b.E(openStream);
                    com.facebook.imagepipeline.nativecode.c.j(openStream, null);
                    return E2;
                } finally {
                }
            case 3:
                String resource = (String) obj2;
                ko.a aVar4 = ko.a.f13464d;
                ki.b.R(obj);
                NitroModules.Companion.getClass();
                ReactApplicationContext reactApplicationContext = NitroModules.applicationContext;
                if (reactApplicationContext == null) {
                    throw j.f6565d;
                }
                Iterator it = kotlin.collections.c0.g("raw", "drawable").iterator();
                while (true) {
                    if (it.hasNext()) {
                        i5 = reactApplicationContext.getResources().getIdentifier(resource, (String) it.next(), reactApplicationContext.getPackageName());
                        if (i5 != 0) {
                        }
                    } else {
                        i5 = 0;
                    }
                }
                if (i5 == 0) {
                    Intrinsics.checkNotNullParameter(resource, "resource");
                    throw new h("Resource not found: " + resource);
                }
                InputStream openRawResource = reactApplicationContext.getResources().openRawResource(i5);
                try {
                    Intrinsics.checkNotNull(openRawResource);
                    byte[] E3 = com.facebook.imagepipeline.nativecode.b.E(openRawResource);
                    com.facebook.imagepipeline.nativecode.c.j(openRawResource, null);
                    return E3;
                } finally {
                }
            default:
                ko.a aVar5 = ko.a.f13464d;
                ki.b.R(obj);
                return Boolean.valueOf(((nr.o) obj2).S(Unit.a));
        }
    }
}
