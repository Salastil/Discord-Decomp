package com.discord.file_manager;

import android.net.Uri;
import android.util.Base64;
import com.facebook.imagepipeline.nativecode.c;
import com.facebook.react.bridge.Promise;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.net.URL;
import java.util.List;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt__StringsKt;
import kotlin.text.x;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_manager.FileModule$readAsset$1", f = "FileModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nFileModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$readAsset$1\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,325:1\n29#2:326\n1#3:327\n*S KotlinDebug\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$readAsset$1\n*L\n119#1:326\n*E\n"})
/* loaded from: classes.dex */
public final class FileModule$readAsset$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $assetUri;
    final /* synthetic */ String $encoding;
    final /* synthetic */ Promise $promise;
    int label;
    final /* synthetic */ FileModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule$readAsset$1(String str, FileModule fileModule, String str2, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.$assetUri = str;
        this.this$0 = fileModule;
        this.$encoding = str2;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new FileModule$readAsset$1(this.$assetUri, this.this$0, this.$encoding, this.$promise, continuation);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x009b  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x00a9 A[Catch: all -> 0x0038, TryCatch #2 {all -> 0x0038, blocks: (B:5:0x0009, B:7:0x0015, B:12:0x0024, B:14:0x002c, B:18:0x009c, B:20:0x00a9, B:24:0x00b4, B:26:0x00b8, B:27:0x00bc, B:36:0x0097, B:37:0x009a, B:38:0x003b, B:41:0x0044, B:44:0x004e, B:46:0x0057, B:47:0x005d, B:49:0x0063, B:50:0x007c, B:51:0x0083, B:52:0x0084, B:29:0x008f, B:33:0x0095), top: B:4:0x0009, inners: #0, #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00b4 A[Catch: all -> 0x0038, TryCatch #2 {all -> 0x0038, blocks: (B:5:0x0009, B:7:0x0015, B:12:0x0024, B:14:0x002c, B:18:0x009c, B:20:0x00a9, B:24:0x00b4, B:26:0x00b8, B:27:0x00bc, B:36:0x0097, B:37:0x009a, B:38:0x003b, B:41:0x0044, B:44:0x004e, B:46:0x0057, B:47:0x005d, B:49:0x0063, B:50:0x007c, B:51:0x0083, B:52:0x0084, B:29:0x008f, B:33:0x0095), top: B:4:0x0009, inners: #0, #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x008f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Uri parse;
        String scheme;
        InputStream openRawResource;
        byte[] E;
        List split$default;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        try {
            parse = Uri.parse(this.$assetUri);
            scheme = parse.getScheme();
        } catch (Throwable th2) {
            this.$promise.reject(th2);
        }
        if (scheme != null) {
            int hashCode = scheme.hashCode();
            if (hashCode != 3143036) {
                if (hashCode == 3213448 && scheme.equals("http")) {
                    openRawResource = new URL(this.$assetUri).openStream();
                }
            } else if (scheme.equals("file")) {
                String path = parse.getPath();
                if (path == null) {
                    path = "";
                }
                File file = new File(path);
                if (file.exists()) {
                    openRawResource = new FileInputStream(file);
                } else {
                    String lastPathSegment = parse.getLastPathSegment();
                    if (lastPathSegment == null) {
                        throw new IllegalStateException("Could not find asset");
                    }
                    FileModule fileModule = this.this$0;
                    split$default = StringsKt__StringsKt.split$default(lastPathSegment, new String[]{"."}, false, 0, 6, null);
                    openRawResource = fileModule.openRawResource((String) split$default.get(0));
                }
            }
            if (openRawResource == null) {
                try {
                    E = com.facebook.imagepipeline.nativecode.b.E(openRawResource);
                } finally {
                }
            } else {
                E = null;
            }
            c.j(openRawResource, null);
            if (Intrinsics.areEqual(this.$encoding, "base64")) {
                this.$promise.resolve(E != null ? x.g(E) : null);
            } else {
                this.$promise.resolve(Base64.encodeToString(E, 2));
            }
            return Unit.a;
        }
        openRawResource = this.this$0.openRawResource(this.$assetUri);
        if (openRawResource == null) {
        }
        c.j(openRawResource, null);
        if (Intrinsics.areEqual(this.$encoding, "base64")) {
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileModule$readAsset$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
