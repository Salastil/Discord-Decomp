package com.discord.file_manager;

import android.net.Uri;
import android.os.ParcelFileDescriptor;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import fo.q;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_manager.FileModule$getSize$1", f = "FileModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nFileModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$getSize$1\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,325:1\n29#2:326\n*S KotlinDebug\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule$getSize$1\n*L\n166#1:326\n*E\n"})
/* loaded from: classes.dex */
public final class FileModule$getSize$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $uri;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ FileModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule$getSize$1(FileModule fileModule, String str, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.this$0 = fileModule;
        this.$uri = str;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        FileModule$getSize$1 fileModule$getSize$1 = new FileModule$getSize$1(this.this$0, this.$uri, this.$promise, continuation);
        fileModule$getSize$1.L$0 = obj;
        return fileModule$getSize$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object i5;
        ReactApplicationContext reactApplicationContext;
        long statSize;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        FileModule fileModule = this.this$0;
        String str = this.$uri;
        Promise promise = this.$promise;
        try {
            q qVar = Result.f13476e;
            reactApplicationContext = fileModule.getReactApplicationContext();
            ParcelFileDescriptor openFileDescriptor = reactApplicationContext.getContentResolver().openFileDescriptor(Uri.parse(str), "r");
            if (openFileDescriptor != null) {
                try {
                    statSize = openFileDescriptor.getStatSize();
                    openFileDescriptor.close();
                } finally {
                }
            } else {
                statSize = 0;
            }
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        if (statSize < 0) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        promise.resolve(new Double(statSize));
        i5 = Unit.a;
        Promise promise2 = this.$promise;
        Throwable a = Result.a(i5);
        if (a != null) {
            promise2.reject(a);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileModule$getSize$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
