package app.rive;

import app.rive.Result;
import app.rive.RiveFileSource;
import app.rive.core.ArtboardHandle;
import app.rive.core.CloseOnce;
import app.rive.core.CommandQueue;
import app.rive.core.DefaultViewModelInfo;
import app.rive.core.FileHandle;
import app.rive.core.SuspendLazy;
import app.rive.runtime.kotlin.core.File;
import app.rive.runtime.kotlin.core.ViewModel;
import fo.n;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CancellationException;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;

@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0000\n\u0002\u0010%\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\t\b\u0007\u0018\u0000 )2\u00020\u0001:\u0001)B\u001b\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\u0010\u0004\u001a\u00060\u0005j\u0002`\u0006¢\u0006\u0002\u0010\u0007J\t\u0010\u001b\u001a\u00020\u001cH\u0096\u0001J\u0014\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u000b0\nH\u0086@¢\u0006\u0002\u0010\u001eJ\u0016\u0010\u001f\u001a\u00020\u000f2\u0006\u0010 \u001a\u00020!H\u0086@¢\u0006\u0002\u0010\"J\u0014\u0010#\u001a\b\u0012\u0004\u0012\u00020\u00110\nH\u0086@¢\u0006\u0002\u0010\u001eJ\u001c\u0010$\u001a\b\u0012\u0004\u0012\u00020\u000b0\n2\u0006\u0010%\u001a\u00020\u000bH\u0086@¢\u0006\u0002\u0010&J\u0014\u0010'\u001a\b\u0012\u0004\u0012\u00020\u000b0\nH\u0086@¢\u0006\u0002\u0010\u001eJ\u001c\u0010(\u001a\b\u0012\u0004\u0012\u00020\u00170\n2\u0006\u0010%\u001a\u00020\u000bH\u0086@¢\u0006\u0002\u0010&R\u001a\u0010\b\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000b0\n0\tX\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\f\u001a\u0014\u0012\u0004\u0012\u00020\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000f0\t0\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0010\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00110\n0\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0019\u0010\u0002\u001a\u00020\u0003ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0012\u0010\u0013R&\u0010\u0015\u001a\u001a\u0012\u0004\u0012\u00020\u000b\u0012\u0010\u0012\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000b0\n0\t0\rX\u0082\u0004¢\u0006\u0002\n\u0000R&\u0010\u0016\u001a\u001a\u0012\u0004\u0012\u00020\u000b\u0012\u0010\u0012\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00170\n0\t0\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0015\u0010\u0004\u001a\u00060\u0005j\u0002`\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u001a\u0010\u001a\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000b0\n0\tX\u0082\u0004¢\u0006\u0002\n\u0000\u0082\u0002\u000b\n\u0005\b¡\u001e0\u0001\n\u0002\b!¨\u0006*"}, d2 = {"Lapp/rive/RiveFile;", "Ljava/lang/AutoCloseable;", "fileHandle", "Lapp/rive/core/FileHandle;", "riveWorker", "Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RiveWorker;", "(JLapp/rive/core/CommandQueue;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "artboardNamesCache", "Lapp/rive/core/SuspendLazy;", "", "", "defaultViewModelInfoCache", "", "Lapp/rive/core/ArtboardHandle;", "Lapp/rive/core/DefaultViewModelInfo;", "enumsCache", "Lapp/rive/runtime/kotlin/core/File$Enum;", "getFileHandle-ENT3xMk", "()J", "J", "instanceNamesCache", "propertiesCache", "Lapp/rive/runtime/kotlin/core/ViewModel$Property;", "getRiveWorker", "()Lapp/rive/core/CommandQueue;", "viewModelNamesCache", "close", "", "getArtboardNames", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getDefaultViewModelInfo", "artboard", "Lapp/rive/Artboard;", "(Lapp/rive/Artboard;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getEnums", "getViewModelInstanceNames", "viewModel", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getViewModelNames", "getViewModelProperties", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nRiveFile.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveFile.kt\napp/rive/RiveFile\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,222:1\n381#2,7:223\n381#2,7:230\n381#2,7:237\n*S KotlinDebug\n*F\n+ 1 RiveFile.kt\napp/rive/RiveFile\n*L\n116#1:223,7\n132#1:230,7\n156#1:237,7\n*E\n"})
/* loaded from: classes.dex */
public final class RiveFile implements AutoCloseable {
    public static final int $stable = 0;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final /* synthetic */ CloseOnce $$delegate_0;

    @NotNull
    private final SuspendLazy<List<String>> artboardNamesCache;

    @NotNull
    private final Map<ArtboardHandle, SuspendLazy<DefaultViewModelInfo>> defaultViewModelInfoCache;

    @NotNull
    private final SuspendLazy<List<File.Enum>> enumsCache;
    private final long fileHandle;

    @NotNull
    private final Map<String, SuspendLazy<List<String>>> instanceNamesCache;

    @NotNull
    private final Map<String, SuspendLazy<List<ViewModel.Property>>> propertiesCache;

    @NotNull
    private final CommandQueue riveWorker;

    @NotNull
    private final SuspendLazy<List<String>> viewModelNamesCache;

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J(\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u00042\u0006\u0010\u0006\u001a\u00020\u00072\n\u0010\b\u001a\u00060\tj\u0002`\nH\u0086@¢\u0006\u0002\u0010\u000b¨\u0006\f"}, d2 = {"Lapp/rive/RiveFile$Companion;", "", "()V", "fromSource", "Lapp/rive/Result;", "Lapp/rive/RiveFile;", "source", "Lapp/rive/RiveFileSource;", "riveWorker", "Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RiveWorker;", "(Lapp/rive/RiveFileSource;Lapp/rive/core/CommandQueue;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nRiveFile.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveFile.kt\napp/rive/RiveFile$Companion\n+ 2 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,222:1\n57#2:223\n53#2:224\n57#2:225\n57#2:226\n70#2:227\n*S KotlinDebug\n*F\n+ 1 RiveFile.kt\napp/rive/RiveFile$Companion\n*L\n65#1:223\n79#1:224\n82#1:225\n86#1:226\n91#1:227\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX WARN: Code restructure failed: missing block: B:22:0x00a6, code lost:
        
            if (r10 == r1) goto L36;
         */
        /* JADX WARN: Removed duplicated region for block: B:24:0x0052  */
        /* JADX WARN: Removed duplicated region for block: B:9:0x0025  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object fromSource(@NotNull final RiveFileSource riveFileSource, @NotNull CommandQueue commandQueue, @NotNull Continuation continuation) {
            RiveFile$Companion$fromSource$1 riveFile$Companion$fromSource$1;
            int i5;
            byte[] m40unboximpl;
            try {
                if (continuation instanceof RiveFile$Companion$fromSource$1) {
                    riveFile$Companion$fromSource$1 = (RiveFile$Companion$fromSource$1) continuation;
                    int i6 = riveFile$Companion$fromSource$1.label;
                    if ((i6 & Integer.MIN_VALUE) != 0) {
                        riveFile$Companion$fromSource$1.label = i6 - Integer.MIN_VALUE;
                        Object obj = riveFile$Companion$fromSource$1.result;
                        ko.a aVar = ko.a.f13464d;
                        i5 = riveFile$Companion$fromSource$1.label;
                        DefaultConstructorMarker defaultConstructorMarker = null;
                        if (i5 != 0) {
                            b.R(obj);
                            RiveLog.INSTANCE.getLogger().d("Rive/File", new Function0<String>() { // from class: app.rive.RiveFile$Companion$fromSource$2
                                {
                                    super(0);
                                }

                                @Override // kotlin.jvm.functions.Function0
                                @NotNull
                                public final String invoke() {
                                    return "Loading Rive file from source: " + RiveFileSource.this;
                                }
                            });
                            commandQueue.acquire("Rive/File");
                            if (riveFileSource instanceof RiveFileSource.Bytes) {
                                m40unboximpl = ((RiveFileSource.Bytes) riveFileSource).m40unboximpl();
                                RiveLog.INSTANCE.getLogger().v("Rive/File", new Function0<String>() { // from class: app.rive.RiveFile$Companion$fromSource$3
                                    {
                                        super(0);
                                    }

                                    @Override // kotlin.jvm.functions.Function0
                                    @NotNull
                                    public final String invoke() {
                                        return "Loaded Rive file bytes from source: " + RiveFileSource.this + "; sending to Rive worker";
                                    }
                                });
                                riveFile$Companion$fromSource$1.L$0 = riveFileSource;
                                riveFile$Companion$fromSource$1.L$1 = commandQueue;
                                riveFile$Companion$fromSource$1.label = 2;
                                obj = commandQueue.m159loadFilexVnc2tA(m40unboximpl, riveFile$Companion$fromSource$1);
                            } else {
                                if (!(riveFileSource instanceof RiveFileSource.RawRes)) {
                                    throw new n();
                                }
                                e eVar = g0.a;
                                d dVar = d.f19093i;
                                RiveFile$Companion$fromSource$fileBytes$1 riveFile$Companion$fromSource$fileBytes$1 = new RiveFile$Companion$fromSource$fileBytes$1(riveFileSource, null);
                                riveFile$Companion$fromSource$1.L$0 = riveFileSource;
                                riveFile$Companion$fromSource$1.L$1 = commandQueue;
                                riveFile$Companion$fromSource$1.label = 1;
                                obj = x.A(dVar, riveFile$Companion$fromSource$fileBytes$1, riveFile$Companion$fromSource$1);
                                if (obj == aVar) {
                                    return aVar;
                                }
                            }
                        } else {
                            if (i5 != 1) {
                                if (i5 != 2) {
                                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                }
                                commandQueue = (CommandQueue) riveFile$Companion$fromSource$1.L$1;
                                riveFileSource = (RiveFileSource) riveFile$Companion$fromSource$1.L$0;
                                b.R(obj);
                                final long m199unboximpl = ((FileHandle) obj).m199unboximpl();
                                RiveLog.INSTANCE.getLogger().d("Rive/File", new Function0<String>() { // from class: app.rive.RiveFile$Companion$fromSource$4
                                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                                    {
                                        super(0);
                                    }

                                    @Override // kotlin.jvm.functions.Function0
                                    @NotNull
                                    public final String invoke() {
                                        return "Loaded Rive file from source: " + RiveFileSource.this + "; " + FileHandle.m198toStringimpl(m199unboximpl);
                                    }
                                });
                                return new Result.Success(new RiveFile(m199unboximpl, commandQueue, defaultConstructorMarker));
                            }
                            commandQueue = (CommandQueue) riveFile$Companion$fromSource$1.L$1;
                            riveFileSource = (RiveFileSource) riveFile$Companion$fromSource$1.L$0;
                            b.R(obj);
                        }
                        m40unboximpl = (byte[]) obj;
                        RiveLog.INSTANCE.getLogger().v("Rive/File", new Function0<String>() { // from class: app.rive.RiveFile$Companion$fromSource$3
                            {
                                super(0);
                            }

                            @Override // kotlin.jvm.functions.Function0
                            @NotNull
                            public final String invoke() {
                                return "Loaded Rive file bytes from source: " + RiveFileSource.this + "; sending to Rive worker";
                            }
                        });
                        riveFile$Companion$fromSource$1.L$0 = riveFileSource;
                        riveFile$Companion$fromSource$1.L$1 = commandQueue;
                        riveFile$Companion$fromSource$1.label = 2;
                        obj = commandQueue.m159loadFilexVnc2tA(m40unboximpl, riveFile$Companion$fromSource$1);
                    }
                }
                if (i5 != 0) {
                }
                m40unboximpl = (byte[]) obj;
                RiveLog.INSTANCE.getLogger().v("Rive/File", new Function0<String>() { // from class: app.rive.RiveFile$Companion$fromSource$3
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return "Loaded Rive file bytes from source: " + RiveFileSource.this + "; sending to Rive worker";
                    }
                });
                riveFile$Companion$fromSource$1.L$0 = riveFileSource;
                riveFile$Companion$fromSource$1.L$1 = commandQueue;
                riveFile$Companion$fromSource$1.label = 2;
                obj = commandQueue.m159loadFilexVnc2tA(m40unboximpl, riveFile$Companion$fromSource$1);
            } catch (CancellationException e9) {
                RiveLog.INSTANCE.getLogger().d("Rive/File", new Function0<String>() { // from class: app.rive.RiveFile$Companion$fromSource$5
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return "Rive file loading was cancelled: " + RiveFileSource.this;
                    }
                });
                commandQueue.release("Rive/File", "Cancellation");
                throw e9;
            } catch (Exception e10) {
                RiveLog.INSTANCE.getLogger().e("Rive/File", e10, new Function0<String>() { // from class: app.rive.RiveFile$Companion$fromSource$6
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return "Error loading Rive file with source: " + RiveFileSource.this;
                    }
                });
                commandQueue.release("Rive/File", "Load error");
                return new Result.Error(e10);
            }
            riveFile$Companion$fromSource$1 = new RiveFile$Companion$fromSource$1(this, continuation);
            Object obj2 = riveFile$Companion$fromSource$1.result;
            ko.a aVar2 = ko.a.f13464d;
            i5 = riveFile$Companion$fromSource$1.label;
            DefaultConstructorMarker defaultConstructorMarker2 = null;
        }

        private Companion() {
        }
    }

    public /* synthetic */ RiveFile(long j, CommandQueue commandQueue, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, commandQueue);
    }

    @Override // java.lang.AutoCloseable
    public void close() {
        this.$$delegate_0.close();
    }

    public final Object getArtboardNames(@NotNull Continuation continuation) {
        return this.artboardNamesCache.await(continuation);
    }

    public final Object getDefaultViewModelInfo(@NotNull Artboard artboard, @NotNull Continuation continuation) {
        SuspendLazy<DefaultViewModelInfo> suspendLazy;
        synchronized (this.defaultViewModelInfoCache) {
            try {
                Map<ArtboardHandle, SuspendLazy<DefaultViewModelInfo>> map = this.defaultViewModelInfoCache;
                ArtboardHandle m104boximpl = ArtboardHandle.m104boximpl(artboard.getArtboardHandle());
                SuspendLazy<DefaultViewModelInfo> suspendLazy2 = map.get(m104boximpl);
                if (suspendLazy2 == null) {
                    suspendLazy2 = new SuspendLazy<>(new RiveFile$getDefaultViewModelInfo$2$1$1(this, artboard, null));
                    map.put(m104boximpl, suspendLazy2);
                }
                suspendLazy = suspendLazy2;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return suspendLazy.await(continuation);
    }

    public final Object getEnums(@NotNull Continuation continuation) {
        return this.enumsCache.await(continuation);
    }

    /* renamed from: getFileHandle-ENT3xMk, reason: not valid java name and from getter */
    public final long getFileHandle() {
        return this.fileHandle;
    }

    @NotNull
    public final CommandQueue getRiveWorker() {
        return this.riveWorker;
    }

    public final Object getViewModelInstanceNames(@NotNull String str, @NotNull Continuation continuation) {
        SuspendLazy<List<String>> suspendLazy;
        synchronized (this.instanceNamesCache) {
            try {
                Map<String, SuspendLazy<List<String>>> map = this.instanceNamesCache;
                SuspendLazy<List<String>> suspendLazy2 = map.get(str);
                if (suspendLazy2 == null) {
                    suspendLazy2 = new SuspendLazy<>(new RiveFile$getViewModelInstanceNames$2$1$1(this, str, null));
                    map.put(str, suspendLazy2);
                }
                suspendLazy = suspendLazy2;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return suspendLazy.await(continuation);
    }

    public final Object getViewModelNames(@NotNull Continuation continuation) {
        return this.viewModelNamesCache.await(continuation);
    }

    public final Object getViewModelProperties(@NotNull String str, @NotNull Continuation continuation) {
        SuspendLazy<List<ViewModel.Property>> suspendLazy;
        synchronized (this.propertiesCache) {
            try {
                Map<String, SuspendLazy<List<ViewModel.Property>>> map = this.propertiesCache;
                SuspendLazy<List<ViewModel.Property>> suspendLazy2 = map.get(str);
                if (suspendLazy2 == null) {
                    suspendLazy2 = new SuspendLazy<>(new RiveFile$getViewModelProperties$2$1$1(this, str, null));
                    map.put(str, suspendLazy2);
                }
                suspendLazy = suspendLazy2;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return suspendLazy.await(continuation);
    }

    private RiveFile(final long j, final CommandQueue riveWorker) {
        Intrinsics.checkNotNullParameter(riveWorker, "riveWorker");
        this.fileHandle = j;
        this.riveWorker = riveWorker;
        this.$$delegate_0 = new CloseOnce(FileHandle.m198toStringimpl(j), new Function0<Unit>() { // from class: app.rive.RiveFile.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m32invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m32invoke() {
                final long j5 = j;
                RiveLog.INSTANCE.getLogger().d("Rive/File", new Function0<String>() { // from class: app.rive.RiveFile.1.1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return a3.e.k("Deleting ", FileHandle.m198toStringimpl(j5));
                    }
                });
                CommandQueue.this.m137deleteFiledJ1Evnk(j);
                CommandQueue.this.release("Rive/File", "RiveFile closed");
            }
        });
        this.artboardNamesCache = new SuspendLazy<>(new RiveFile$artboardNamesCache$1(this, null));
        this.viewModelNamesCache = new SuspendLazy<>(new RiveFile$viewModelNamesCache$1(this, null));
        this.instanceNamesCache = new LinkedHashMap();
        this.propertiesCache = new LinkedHashMap();
        this.enumsCache = new SuspendLazy<>(new RiveFile$enumsCache$1(this, null));
        this.defaultViewModelInfoCache = new LinkedHashMap();
    }
}
