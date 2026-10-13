package com.margelo.nitro.rive;

import java.lang.ref.WeakReference;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final /* synthetic */ class x implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6605d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridRiveView f6606e;

    public /* synthetic */ x(HybridRiveView hybridRiveView, int i5) {
        this.f6605d = i5;
        this.f6606e = hybridRiveView;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean unregisterView$lambda$0;
        Unit _set_stateMachineName_$lambda$1;
        Unit _set_file_$lambda$3;
        Unit _set_artboardName_$lambda$0;
        Unit _set_autoPlay_$lambda$2;
        switch (this.f6605d) {
            case 0:
                unregisterView$lambda$0 = HybridRiveFile.unregisterView$lambda$0(this.f6606e, (WeakReference) obj);
                return Boolean.valueOf(unregisterView$lambda$0);
            case 1:
                _set_stateMachineName_$lambda$1 = HybridRiveView._set_stateMachineName_$lambda$1(this.f6606e, (String) obj);
                return _set_stateMachineName_$lambda$1;
            case 2:
                _set_file_$lambda$3 = HybridRiveView._set_file_$lambda$3(this.f6606e, (HybridRiveFileSpec) obj);
                return _set_file_$lambda$3;
            case 3:
                _set_artboardName_$lambda$0 = HybridRiveView._set_artboardName_$lambda$0(this.f6606e, (String) obj);
                return _set_artboardName_$lambda$0;
            default:
                _set_autoPlay_$lambda$2 = HybridRiveView._set_autoPlay_$lambda$2(this.f6606e, (Boolean) obj);
                return _set_autoPlay_$lambda$2;
        }
    }
}
