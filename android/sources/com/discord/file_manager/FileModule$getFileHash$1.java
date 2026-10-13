package com.discord.file_manager;

import android.net.Uri;
import android.os.ParcelFileDescriptor;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import fo.q;
import java.io.FileInputStream;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.Locale;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.jvm.internal.StringCompanionObject;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import uo.c;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_manager.FileModule$getFileHash$1", f = "FileModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nFileModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$getFileHash$1\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,325:1\n29#2:326\n1#3:327\n*S KotlinDebug\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$getFileHash$1\n*L\n298#1:326\n*E\n"})
/* loaded from: classes.dex */
public final class FileModule$getFileHash$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $algorithm;
    final /* synthetic */ double $chunkSize;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $uri;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ FileModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule$getFileHash$1(String str, FileModule fileModule, String str2, Promise promise, double d6, Continuation continuation) {
        super(2, continuation);
        this.$algorithm = str;
        this.this$0 = fileModule;
        this.$uri = str2;
        this.$promise = promise;
        this.$chunkSize = d6;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        FileModule$getFileHash$1 fileModule$getFileHash$1 = new FileModule$getFileHash$1(this.$algorithm, this.this$0, this.$uri, this.$promise, this.$chunkSize, continuation);
        fileModule$getFileHash$1.L$0 = obj;
        return fileModule$getFileHash$1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:29:0x009f, code lost:
    
        if (r0 != null) goto L29;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object i5;
        String lowerCase;
        ReactApplicationContext reactApplicationContext;
        int i6;
        String sb2;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        String str = this.$algorithm;
        FileModule fileModule = this.this$0;
        String str2 = this.$uri;
        Promise promise = this.$promise;
        double d6 = this.$chunkSize;
        try {
            q qVar = Result.f13476e;
            lowerCase = str.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        if (!Intrinsics.areEqual(lowerCase, "md5")) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        reactApplicationContext = fileModule.getReactApplicationContext();
        ParcelFileDescriptor openFileDescriptor = reactApplicationContext.getContentResolver().openFileDescriptor(Uri.parse(str2), "r");
        if (openFileDescriptor != null) {
            try {
                FileInputStream fileInputStream = new FileInputStream(openFileDescriptor.getFileDescriptor());
                MessageDigest messageDigest = MessageDigest.getInstance("MD5");
                byte[] bArr = new byte[c.a(d6)];
                while (true) {
                    int read = fileInputStream.read(bArr);
                    if (read == -1) {
                        break;
                    }
                    messageDigest.update(bArr, 0, read);
                }
                fileInputStream.close();
                StringBuilder sb3 = new StringBuilder();
                for (byte b10 : messageDigest.digest()) {
                    StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
                    String format = String.format(Locale.US, "%02x", Arrays.copyOf(new Object[]{Byte.valueOf(b10)}, 1));
                    Intrinsics.checkNotNullExpressionValue(format, "format(...)");
                    sb3.append(format);
                }
                sb2 = sb3.toString();
                openFileDescriptor.close();
            } finally {
            }
        }
        sb2 = "";
        promise.resolve(sb2);
        i5 = Unit.a;
        Promise promise2 = this.$promise;
        Throwable a = Result.a(i5);
        if (a != null) {
            promise2.reject("err", "Cannot get checksum of file", a);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileModule$getFileHash$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
